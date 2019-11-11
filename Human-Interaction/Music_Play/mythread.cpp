#include "mythread.h"
#include <stdlib.h>
MyThread::MyThread()
{

}
MyThread::~MyThread() {}
void MyThread::run () {
	//执行js程序 获取网易云音乐的api
	system ("node /home/onezero/Files/NeteaseCloudMusicApi/app.js");
}
