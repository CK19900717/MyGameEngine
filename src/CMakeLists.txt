# 创建引擎库
add_library(MagicEngine
    Engine.cpp
)

# 设置库属性
target_include_directories(MagicEngine
 PUBLIC 
 $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
 $<INSTALL_INTERFACE:include>
 )   