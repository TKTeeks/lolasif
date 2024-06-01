#pragma once
#include "hook_wrapper.h"
#include "memory.h"

class looting
{
public:
	void set_hide_looted(bool val);
	bool hide_looted;
	void init_ui();
	bool loot_all=false;
	ULONGLONG loot_next_item_time = 0;
	void looted_item();
	looting(class ZealService* zeal);
	~looting();
private:
	int last_looted = -1;
};
