#pragma once

#include <SDL2/SDL.h>

#include <string>
#include <iostream>
#include <vector>
#include <memory>

#include <Config.h>

#include <System/Logger.h>

#include <Rendering/Renderer.h>

#include <Events/Event.h>
#include <Events/EventHandler.h>
#include <Events/Keyboard.h>

namespace Sourcehold
{
    namespace Rendering
    {
        using namespace Events;

        class Display :
            public Rendering::Renderer
        {
                const int FRAMES_PER_SECOND = 30;
                uint32_t timer = 0;
                int frame = 0;
                bool open = false;
            public:
                Display();
                Display(const Display &dp);
                ~Display();

                void Open(const std::string &title, int width, int height, bool fullscreen = false, bool noborder = false);
                void Fullscreen();
                void Close();
                void StartTimer();
                void EndTimer();
                void Clear();

                bool IsOpen();
                uint32_t GetTicks();
                uint32_t GetSeconds();
            protected:
        };
    }
}
