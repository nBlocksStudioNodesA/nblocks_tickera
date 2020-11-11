#ifndef __NB_TICKER_ARDUINO
#define __NB_TICKER_ARDUINO

#include "../nworkbench.h"
#include <Arduino.h>

class nBlock_Ticker: public nBlockSimpleNode<1> {
public:
    nBlock_Ticker(uint32_t period_ms);
    void endFrame(void);
private:
    uint32_t _last_tick;
	uint32_t period;
};

#endif
