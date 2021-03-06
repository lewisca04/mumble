// Copyright 2005-2017 The Mumble Developers. All rights reserved.
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file at the root of the
// Mumble source tree or at <https://www.mumble.info/LICENSE>.

#include "mumble_pch.hpp"

#include "Overlay.h"
#include "OverlayConfig.h"

void Overlay::platformInit() {
	d = NULL;
}

void Overlay::setActive(bool) {
}

bool OverlayConfig::supportsInstallableOverlay() {
	return false;
}

bool OverlayConfig::isInstalled() {
	return true;
}

bool OverlayConfig::needsUpgrade() {
	return false;
}

bool OverlayConfig::installFiles() {
	return false;
}

bool OverlayConfig::uninstallFiles() {
	return false;
}
