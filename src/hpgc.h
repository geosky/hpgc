#ifndef HPGC_FRAMEWORK_H_INCLUDE

#define HPGC_FRAMEWORK_H_INCLUDE

/**
* @file hpgc.h
* @brief ����hpgc framework�����ֽӿ�
*
* hpgc framework ��Ŀ����Ϊ�˼򻯸����ܵ����㷨�Ŀ����Ѷȣ�ʹ�����㷨ͨ��ʵ��һЩ�ӿڲ��л���
* Ϊ�����úͽ������������hpgc framework �����Partiton, Scheduler, HpgcAlgotithm, AlgFactory�������
* Partition�������ݻ��֣�Scheduler������̵��ȣ�HpgcAlgorithm��װһ�������㷨��AlgFactory���ڴ���һ�������㷨��
* hpgc framework ������MPI��GDAL���֮�ϣ�ϣ���ﵽ����Ŀ�ģ�
* ��1�����㷨ͨ��ʵ����Щ�ӿڿ��Ժ����׵Ľ��벢�п����ȥ��
* ��2�����д�����̵���ģʽ�������չ��
* ��3�����ݻ��ֲ����������չ��
* ��4����������ܵ�������װMPI����MPI�ĵ��ù��̡�
*
* @author mongogis@gmail.com
* @version 0.1
* @date 2014
*/

/// @brief ����hpgc framework �Ǽܡ�
///
/// �����ռ�hpgc��ֻframework�Ǽ���Ķ�����Ϊ���е����㷨�����õĲ��֡�
/// ��MPIObject, framework�Ĺ����ӿڣ���������㷨��ʵ�ֵ��಻���������С�

#include "HpgcAlgorithm.h"
#include "IData.h"
#include "IFactory.h"
#include "FactoryManager.h"
#include "IPartition.h"
#include "IScheduler.h"
#include "IFactory.h"
#include "AlgFactoryMan.h"
#include "SchFactoryMan.h"
#include "ParFactoryMan.h"
#endif