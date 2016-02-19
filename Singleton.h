#pragma once


// singleton
#define SINGLETON(className)\
private:\
	className() {}\
	~className() {}\
public:\
	static className& Instance() {\
		static className instance;\
		return instance;\
	}\
	className(className&&) = delete; \
	className(className const&) = delete; \
	className& operator=(className&&) = delete; \
	className& operator=(className const&) = delete; \


// unable copy
#define UNABLE_COPY(className)\
public:\
	className() = default; \
	~className() = default; \
	className(className&&) = delete;\
	className(className const&) = delete;\
	className& operator=(className&&) = delete;\
	className& operator=(className const&) = delete;\


