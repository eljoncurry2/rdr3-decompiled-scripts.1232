#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		aggregate_func_2819();
	}
	while (true)
	{
		if (aggregate_func_523(0, 0))
		{
			aggregate_func_2819();
		}
		BUILTIN::WAIT(0);
	}
	aggregate_func_2819();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

