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

	//テクスチャコンバータ
	TextureConverter converter;
	//テクスチャ変換
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	//COMライブラリ終了
	CoUninitialize();

	system("pause");
	return 0;
}