extern 	SYSTEM_STAT sys_stat;
extern	THERAPY_CONFIG theo_conf;
extern	TOUCH_STAT touch_stat;
extern	BUTTOMS buttoms;
extern	DATA_STAT rawdata;
extern	AD_STAT ad_stat;
extern	HEAT_STAT heart_stat;
extern	PUMP_STAT pump_stat;

/*
struct SYSTEM_STAT{
	uint  interface;			//所处界面  0.主界面 1.工作界面
	uint refresh;
};

struct THERAPY_CONFIG{
	float compress_ratio; 	//压缩比
	double volume;		    //压缩总量
	uint heart_beat;		
};

struct TOUCH_STAT{
	uint xpoint,ypoint;		//屏幕位置
	uint xdata,ydata;  		//ts采样值
};

//按钮状态
struct BUTTOMS{
	uint start;		//开始工作
	uint stop; 		//结束工作
};

struct DATA_STAT{
	uint index;
};

struct AD_STAT{
	uint ad_raw;
};

struct HEAT_STAT{
	uint Max;//最大值
	uint Period;//周期
	uint Min;//最小值
	uint RelaxPeriod;//舒缓期长度
	uint Ave; //平均值
//	uint useful;//数据是够有效
	uint updown;//0->上升期 1->下降期
	uint ClosePoint;
	float delt[2];	 //delta值，[0]上一次的值，[1]现值
	uint rate;	//心率
};

struct PUMP_STAT{
	uint direction;
	uint step;
	uint pwm_rate;
	uint stat;
	uint pos;
};
*/
