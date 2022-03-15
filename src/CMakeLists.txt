cmake_minimum_required(VERSION 3.5)

project(CloudViewer)

# init qt
set(CMAKE_AUTOMOC ON) # for meta object compiler
set(CMAKE_AUTORCC ON) # resource files
set(CMAKE_AUTOUIC ON) # UI files
set(RVC_ROOT "/opt/RVC")
set(RVC_INCLUDE_DIRS "${RVC_ROOT}/include")
set(RVC_LIB_DIR "${RVC_ROOT}/lib")
file(GLOB RVC_LIBS "${RVC_LIB_DIR}/libRVC.so" ABSOLUTE)
file(GLOB RVC_DEPS_LIBS "${RVC_LIB_DIR}/externals/*.so" ABSOLUTE)
# find package
find_package(Qt5 REQUIRED Widgets)
find_package(PCL REQUIRED)
find_package (VTK REQUIRED)
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

# find source files, header files and ui files
# aux_source_directory(. DIR_SRCS)
file(GLOB_RECURSE DIR_SRCS    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
file(GLOB_RECURSE DIR_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.h)
file(GLOB_RECURSE DIR_UIS     ${CMAKE_CURRENT_SOURCE_DIR}/*.ui)
set(PROJECT_SOURCES
        camconcrol.cpp
        camconcrol.h

        )
# add resource
set(RESOURCE ${CMAKE_CURRENT_SOURCE_DIR}/CloudViewer.qrc)
qt5_add_resources(RESOURCE_ADDED ${RESOURCE})

add_executable(${PROJECT_NAME}
    ${DIR_SRCS}
    ${DIR_HEADERS}
    ${DIR_UIS}
    ${RESOURCE_ADDED}

)

target_link_libraries(${PROJECT_NAME}
    ${PCL_LIBRARIES}
    ${OpenCV_LIBS}
    ${VTK_LIBRARIES}
    Qt5::Widgets
    ${RVC_LIBS}
    ${RVC_DEPS_LIBS}
    /opt/RVC/examples/C++/build/libSave_IO.a
    /opt/RVC/examples/C++/build/libUtils.a
)
