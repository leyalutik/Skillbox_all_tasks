cmake_minimum_required(VERSION 3.10) 


project(sort_functions_libraries)   #название проекта

add_library(sort_functions_libraries 			 							insert_sort.cpp 
						merge_sort.cpp)  #создание статической библиотеки

