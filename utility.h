#ifndef utility_h__
#define utility_h__
//#define ROW 1024*4
//#define COL 1024*4
#include <Windows.h>

#define NEIGHBORDATATYPE unsigned short
#define TmpAreaDATATYPE unsigned short
#define LABELDATATYPE int

typedef struct {
	int	linkLine;
	int startpos;
	int endpos;
	int nextline;
}Line;

typedef struct {
	int	root;
	int SP;
	int EP;
}LineStream;

typedef struct {
	int	RootLink;
	int upStartPos;
	int upEndPos;
	int downStartPos;
	int downEndPos;
	//int nextStripe;
}Stripe_;

typedef struct {
	int	RootLink;
	int upStartPos;
	int upEndPos;
	int downStartPos;
	int downEndPos;
	int upLink;
	int downLink;
}Stripe;

typedef struct {
	int	RootLink;
	int upStartPos;
	int upEndPos;
	int downStartPos;
	int downEndPos;
	int upLink;
	int downLink;
}StripeUltra;

typedef struct {
	int	RootLink;
	int upLink;
	int downLink;
}Stripe_ultra;

typedef struct{
	int upLink;
	int downLink;
}StripeIndex;

//#include "morph_algorithms.h"

int LableRow(LABELDATATYPE *data,int rowLen,int colLen,int currentRow);

int LabelOrg(LABELDATATYPE *array, int RowLen,  int ColLen);
int LabelFyb(LABELDATATYPE *data,int row,int col);
int LabelLBLA(LABELDATATYPE *data,int row,int col);
int LabelLBLA_LastLine(LABELDATATYPE *data,int row,int col);
int LabelLBLA_LastLine_nomem(LABELDATATYPE *data,int row,int col);
int LabelSBLA_fast(LABELDATATYPE *data,int row,int col);
int LabelSBFE(LABELDATATYPE *data,int row,int col);
int LabelSBFU(LABELDATATYPE *data,int row,int col);
int LabelSSLA(LABELDATATYPE *data,int row,int col);
int LabelDCLA_R(LABELDATATYPE *data,int row,int col);
int LabelSSLA_fast(LABELDATATYPE *data,int row,int col);
int LabelOneScan(LABELDATATYPE *data,int row,int col);
int LabelKesheng(LABELDATATYPE *data,int row,int col);
int LabelDCLA(LABELDATATYPE *data,int rowLen,int colLen);
int createMatrix(LABELDATATYPE*data,int row,int col,int posibility);
int dumpMatrix1(LABELDATATYPE *data,int row,int col);
int dumpMatrix2(LABELDATATYPE *data,int row,int col);
int LabelKHA(int *data,int rowLen,int colLen);
int LabelSBLA_nomem(LABELDATATYPE *data,int row,int col);

int LeapHookLA(LABELDATATYPE *data,int rowLen,int colLen);
int LineDescriptorLeapLA(LABELDATATYPE *data,int rowLen,int colLen);
int LBLA_stream(LABELDATATYPE *data,int rowLen,int colLen);
int dumpStructureMatrix(LineStream *picLine,int *picRow,int rowNum);
int LeapHookLA2(LABELDATATYPE *data,int rowLen,int colLen);
int LeapHookLA_PerfAnalysis(LABELDATATYPE *data,int rowLen,int colLen);
int LeapHookLA_cmp(LABELDATATYPE *data,int rowLen,int colLen);
int SSLA_zhl(LABELDATATYPE *data,int rowLen,int colLen);
int LBLA_noMem_zhl(LABELDATATYPE *data,int rowLen,int colLen);
int LBLA_stream2(LABELDATATYPE *data,int rowLen,int colLen);

int LBLA_stream2_SP(LABELDATATYPE *data,int *SP_array,int num, int rowLen,int colLen);

int CT(int *data,int rowLen,int colLen);
int** changeImg(LABELDATATYPE *data, int rowLen, int colLen);

int LabelSBFU2(LABELDATATYPE *data,int row,int col);
int LabelSBLA_RootUp_compact(LABELDATATYPE *data,int row,int col);
int LabelDCLA_rootUp(LABELDATATYPE *data,int row,int col);

#endif // utility_h__
