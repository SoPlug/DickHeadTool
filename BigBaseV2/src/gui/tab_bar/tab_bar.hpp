#pragma once
#include "common.hpp"
#include "imgui.h"
#include "features.hpp"
#include "settings.h"
#include "natives.hpp"
#include "script.hpp"
#include "fiber_pool.hpp"

namespace big
{
	using namespace features;

	class tabbar
	{
	public:
		static void render_self();
	};

}