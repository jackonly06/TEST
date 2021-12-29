/*************************************************************************
    > File Name: 37_1.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月26日 星期日 21时21分55秒
 ************************************************************************/
/* 异常 */

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int my_cp2(const char *src_file, const char * dest_file)
{
    FILE *in_file, *out_file;

    in_file = fopen(src_file, "rb");
    if(in_file == NULL)
    {
        throw 1;//throw就是抛出的异常
    }

    out_file = fopen(dest_file, "wb");
    if(out_file == NULL)
    {
        throw 2;
    }

    char rec[256];
    size_t bytes_in, bytes_out;
    while((bytes_in = fread(rec, 1, 256, in_file)) > 0)
    {
        bytes_out = fwrite(rec, 1, bytes_in, out_file);
        if(bytes_in != bytes_out)
        {
            throw 3;
        }
    }
    fclose(in_file);
    fclose(out_file);
    return 0;
}


int main(int argc, char **argv)
{
    int result;
    if((result = my_cp2("d:\\temp\\1.txt","\\temp\\2.txt"))!= 0)
    {
        switch(result)
        {
            case 1:
                printf("打开源文件时错！\n");
                break;
            case 2:
                printf("打开目标文件时出错！\n");
                break;
            case 3:
                printf("拷贝文件时出错！\n");
                break;
            default:
                printf("发生未知错误！\n");
                break;
        }
    }

    try
    {
        my_cp2("d:\\temp\\1.txt", "d:\\temp\\22.txt");

    }
    catch(int e)
    {
        printf("发生异常：%d\n", e);
    }

    printf("OK!\n");

    return 0;
}

