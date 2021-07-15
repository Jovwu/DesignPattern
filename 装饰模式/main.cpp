#include "one_ui_os.h"
#include "mi_ui_os.h"
#include "sound_effect.h"
#include "animation.h"

//������ʵ���ϲ��Ǻ�ǡ�����������Ч�Ͷ����ĳ�OneUI2.0��MIUI2.0���Ϊ�׵�

int main() {

	//����ʱ����
	OneUIOS* oneui = new OneUIOS();

	//�����Ч
	SoundEffect* se = new SoundEffect(oneui);
	se->startUp();
	se->operation();
	se->shutdown();

	//��Ӷ���ͬ��

	//�ͷ�
	delete oneui;
	delete se;
	return 0;
}