cmake_minimum_required(VERSION 3.17)
project(LP C)

set(CMAKE_C_STANDARD 11)

add_executable(LP src/main.c src/util.c src/util.h src/irs.c src/irs.h src/strs.h src/colors.h src/menu.h src/menu.c src/paths.h src/iss.c src/iss.h src/proc.c src/proc.h src/calendar.c src/calendar.h src/employees.c src/employees.h src/reports.c src/reports.h)