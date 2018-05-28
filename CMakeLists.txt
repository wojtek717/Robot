cmake_minimum_required(VERSION 3.10)
project(Robot)

set(CMAKE_CXX_STANDARD 11)

add_executable(Robot main.cpp lacze_do_gnuplota.cpp lacze_do_gnuplota.h Vector2D.h SVector.h GraphicObject.cpp GraphicObject.h VerticesCollection.cpp VerticesCollection.h Robot.cpp Robot.h Path.cpp Path.h Consts.h Scene.cpp Scene.h Obstacle.cpp Obstacle.h)