#define GLFW_INCLUDE_VULKAN
#include<glfw/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include<glm/vec4.hpp>
#include<glm/mat4x4.hpp>

#include<iostream>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

int main() {
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	GLFWwindow* window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Vulkan window", nullptr, nullptr);

	uint32_t extensionCount = 0;
	vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

	std::cout << extensionCount << " entensions supported\n";

	glm::mat4 matrix;
	glm::vec4 vec;
	auto test = matrix * vec;

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

	glfwDestroyWindow(window);

	glfwTerminate();

	return 0;
}