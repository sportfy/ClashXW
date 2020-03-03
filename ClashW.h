/*
 * Copyright (C) 2020 Richard Yu <yurichard3839@gmail.com>
 *
 * This file is part of ClashW.
 *
 * ClashW is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ClashW is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with ClashW.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "resource.h"

namespace fs = std::filesystem;

HINSTANCE g_hInst;
fs::path g_exePath;
fs::path g_dataPath;
std::string g_clashVersion;
HWND g_hWnd;

constexpr UINT WM_NOTIFYICON = WM_APP + 1;
constexpr UINT WM_PROCESSNOTIFY = WM_APP + 2; // wParam=exitCode

constexpr auto CLASHW_APP_ID = L"com.ysc3839.clashw";
constexpr auto CLASHW_MUTEX_NAME = L"Local\\com.ysc3839.clashw";
constexpr auto CLASHW_DIR_NAME = L"ClashW";
constexpr auto CLASH_EXE_NAME = L"clash.exe";

#include "Util.hpp"
#include "I18n.hpp"
#include "MenuUtil.hpp"
#include "ProcessManager.hpp"
#include "ClashApi.hpp"

std::unique_ptr<ProcessManager> g_processManager;
std::unique_ptr<ClashApi> g_clashApi;
