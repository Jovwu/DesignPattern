#include "one_ui_os.h"
#include "mi_ui_os.h"
#include "sound_effect.h"
#include "animation.h"

//该例子实际上不是很恰当，如果把音效和动画改成OneUI2.0和MIUI2.0会更为妥当

int main() {

	//运行时分配
	OneUIOS* oneui = new OneUIOS();

	//添加音效
	SoundEffect* se = new SoundEffect(oneui);
	se->startUp();
	se->operation();
	se->shutdown();

	//添加动画同上

	//释放
	delete oneui;
	delete se;
	return 0;
}