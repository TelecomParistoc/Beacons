#include "radioconf.h"

// parts that should be transmitting in each time slot
const char TXtimeTable[] = {
	BEACON1_ID,
	BIGFOE_ID,
	BIGFOE_ID,
	BIGFOE_ID,
	BIGFOE_ID,
	SMALLFOE_ID,
	SMALLFOE_ID,
	SMALLFOE_ID,
	SMALLFOE_ID,
	BIGBOT_ID,
	BIGBOT_ID,
	BIGBOT_ID,
	BIGBOT_ID,
	SMALLBOT_ID,
	SMALLBOT_ID,
	SMALLBOT_ID,
	SMALLBOT_ID
};

// parts that should be listening in each time slot
const char RXtimeTable[] = {
	BEACON2_ID | BEACON3_ID | SMALLFOE_ID | BIGFOE_ID | SMALLBOT_ID | BIGBOT_ID,
	BEACON3_ID,
	BEACON2_ID,
	BEACON1_ID,
	BIGBOT_ID | SMALLBOT_ID | BEACON1_ID,
	BEACON3_ID,
	BEACON2_ID,
	BEACON1_ID,
	BIGBOT_ID | SMALLBOT_ID | BEACON1_ID,
	BEACON3_ID,
	BEACON2_ID,
	BEACON1_ID,
	SMALLBOT_ID | BEACON1_ID,
	BEACON3_ID,
	BEACON2_ID,
	BEACON1_ID,
	BIGBOT_ID | BEACON1_ID,
};
