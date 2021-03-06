﻿#ifndef HGL_GRAPHICS_APPLICATION_INCLUDE
#define HGL_GRAPHICS_APPLICATION_INCLUDE

#include<hgl/platform/BaseApplication.h>
#include<hgl/platform/GraphicsSystemInitInfo.h>
#include<hgl/platform/EventBase.h>
#include<hgl/object/FlowControl.h>

namespace hgl
{
    namespace platform
    {
        class Window;
    }//namespace platform

    using namespace platform;

	namespace graph
	{
		class TileFont;

		/**
		* 图形应用程序基类
		*/
		class GraphicsApplication:public BaseApplication                                                ///图形应用序基类
		{
			Window *win;
			bool wait_active;

            AppEventBase *app_event_base;                                                               ///<根事件

		protected:

			FlowControl *flow;                                                       					///<流程控制器

			TileFont *default_font;

			bool visible;																				///<是否显示
			uint cur_fps;
			double interval_time;

		protected:

			virtual void ProcActiveObject(FlowObject *);

		protected:

			uint		GetFPS()		{return cur_fps;}
			void		SetFPS(uint);

			TileFont *	GetDefaultFont(){return default_font;}

		public:	//属性

			Property<uint32>		FPS;																///<当前刷新频率
			Property<TileFont *>	DefaultFont;														///<缺省字体(GUI模块使用)

		public:	//事件

            virtual bool ProcClose();
            virtual bool ProcResize(int,int);

			DefEvent(void,OnResize,(int,int));															///<窗口大小被调整了
			DefEvent(bool,OnClose,());																	///<窗口被关闭了

		public:	//方法

			GraphicsApplication(FlowControl *fc=nullptr);
			virtual ~GraphicsApplication();

            AppEventBase *GetEventBase(){return app_event_base;}                                        ///<取得根事件收发器

			virtual bool Init(GraphicsSystemInitInfo *);												///<初始化当前应用程序

			virtual void SetStart(FlowObject *);														///<设定起始流程对象

			virtual int  Run();																		    ///<运行当前应用程序

			virtual void ExitApp(){if(flow)flow->ExitApp();}											///<退出游戏

            virtual void SwapBuffer();                                                                  ///<刷新一帧
			virtual void WaitActive();																	///<等待活动

    //		virtual bool ToMinimize();																	///<窗口最小化(全屏模式无效)
	//		virtual bool ToMaximize();																	///<窗口最大化(全屏模式无效)
		};//GraphicsApplication
	}//namespace graph
}//namespace hgl

/**
* 图形程序总入口函数
* @param sii 系统初始化信息类，需由开发者补充填写一定的信息
* @param app 应用程序整体控制管理类
* @param args 由命令行或其它程序传来的参数列表
* @return 返回值，将会回传给操作系统
*/
extern "C" int GraphicsAppMain(hgl::GraphicsSystemInitInfo &sii,hgl::graph::GraphicsApplication &app,const hgl::StringList<hgl::OSString> &args);
#endif//HGL_GRAPHICS_APPLICATION_INCLUDE
