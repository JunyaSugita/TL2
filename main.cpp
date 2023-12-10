#include <cstdio>
#include <cstdlib>
#include <assert.h>
#include "TextureConverter.h"


enum Argument {
	lApplicationPath,
	kFilePath,

	NumArgument
};

int main(int argc,char* argv[]) {
	assert(argc >= NumArgument);
	
	HRESULT hr = CoInitializeEx(nullptr,COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//�e�N�X�`���R���o�[�^
	TextureConverter converter;
	//�e�N�X�`���ϊ�
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	//COM���C�u�����I��
	CoUninitialize();

	system("pause");
	return 0;
}