#include "tickera.h"

// TICKERA
nBlock_TickerA::nBlock_TickerA(uint32_t period_ms) {
	period = period_ms;
	_last_tick = millis();
}
void nBlock_TickerA::endFrame(void) {
	uint32_t tick_now = millis();
	uint32_t elapsed = tick_now - _last_tick;
	
	if (elapsed >= period) {
		_last_tick += period; // not tick_now as this is soft realtime
		
		output[0] = 1;
		available[0] = 1;
	}	
}
