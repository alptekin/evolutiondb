#ifndef POPPAD_H_
#define POPPAD_H_

typedef struct tagPETINFO
{
    TCHAR szKind[10];
    TCHAR szBreed[50];
    TCHAR szPrice[20];
}PETINFO;


PETINFO rgPetInfo[ ] = 
{
    {TEXT("Dog"), TEXT("Poodle"), TEXT("$300.00")},
    {TEXT("Cat"), TEXT("Siamese"), TEXT("$100.00")},
    {TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
	{TEXT("Fish"), TEXT("Angel Fish"), TEXT("$10.00")},
};

#endif