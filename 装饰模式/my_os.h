#pragma once
//ģ�����ϵͳ
class MyOS {

public:
	virtual bool startUp() = 0;
	virtual bool operation() = 0;
	virtual bool shutdown() = 0;

	virtual ~MyOS() {}
};