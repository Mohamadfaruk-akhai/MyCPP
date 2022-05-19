cmake_minimum_required(VERSION 3.0)
project(MyCPP)

add_executable(
	MyCPP
	banking.cpp
	src/Operations.cpp
	src/closeAccountOperation.cpp
	include/closeAccountOperation.h
	include/Operations.h
	)
