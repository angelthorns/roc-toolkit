/*
 * Copyright (c) 2019 Roc Streaming authors
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#include "roc_sndio/pulseaudio_sink.h"

namespace roc {
namespace sndio {

PulseaudioSink::PulseaudioSink(const Config& config)
    : PulseaudioDevice(config, Device_Sink) {
}

PulseaudioSink::~PulseaudioSink() {
}

audio::SampleSpec PulseaudioSink::sample_spec() const {
    return PulseaudioDevice::sample_spec();
}

core::nanoseconds_t PulseaudioSink::latency() const {
    return PulseaudioDevice::latency();
}

bool PulseaudioSink::has_clock() const {
    return PulseaudioDevice::has_clock();
}

void PulseaudioSink::write(audio::Frame& frame) {
    PulseaudioDevice::request(frame);
}

} // namespace sndio
} // namespace roc
