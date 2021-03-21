px4_add_module(
	MODULE examples__ck_hover_ctrl
	MAIN ck_hover_ctrl
	STACK_MAX 1300
	SRCS
		main.cpp
	DEPENDS
	)
