//
// Copyright (c) 2008-2016 the Urho3D project.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#include "../Precompiled.h"

#include "../Core/Timer.h"
#include "../LuaScript/LuaScriptUtils.h"

#include <kaguya.hpp>

namespace Urho3D
{

extern void RegisterContext(kaguya::State& lua);
extern void RegisterObject(kaguya::State& lua);
extern void RegisterProcessUtils(kaguya::State& lua);
extern void RegisterSpline(kaguya::State& lua);
extern void RegisterStringUtils(kaguya::State& lua);
extern void RegisterTimer(kaguya::State& lua);
extern void RegisterVariant(kaguya::State& lua);
extern void RegisterVariantMap(kaguya::State& lua);

void RegisterCoreLuaAPI(kaguya::State& lua)
{
    RegisterContext(lua);
    RegisterObject(lua);
    RegisterProcessUtils(lua);
    RegisterSpline(lua);
    RegisterStringUtils(lua);
    RegisterTimer(lua);
    RegisterVariant(lua);
    RegisterVariantMap(lua);

    lua["time"] = GetSubsystem<Time>();
    lua["GetTime"] = GetSubsystem<Time>;
}
}