#ifndef __NB_TICKERA_ARDUINO
#define __NB_TICKERA_ARDUINO

#include "../nworkbench.h"
#include <Arduino.h>

class nBlock_TickerA: public nBlockSimpleNode<1> {
public:
    nBlock_TickerA(uint32_t period_ms);
    void endFrame(void);
private:
    uint32_t _last_tick;
	uint32_t period;
};

#endif
