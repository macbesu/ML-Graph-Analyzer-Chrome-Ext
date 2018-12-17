
#include <stdlib.h>
#include <math.h>

float static_buffer[54945360];
float* dynamic_buffer = nullptr;

int meta_buf_0[] = {51429992,25526632,1,3,224,224,112,112,7,7,1,1,2,2,3,3};
int meta_buf_1[] = {25526632,0,36402280,12544,64,147};
int meta_buf_2[] = {9408,36402280,36402280,64,64,64,12544};
int meta_buf_3[] = {36402280,46813800,1,112,112,64,56,56,3,3,2,2,1,1};
int meta_buf_4[] = {46813800,9472,48620136,3136,64,64};
int meta_buf_5[] = {13568,48620136,48620136,64,64,64,3136};
int meta_buf_6[] = {48620136,30983272,1,64,56,56,56,56,3,3,1,1,1,1,1,1};
int meta_buf_7[] = {30983272,13632,51028584,3136,64,576};
int meta_buf_8[] = {50496,51028584,48419432,64,64,64,3136};
int meta_buf_9[] = {48419432,50560,38007912,3136,256,64};
int meta_buf_10[] = {46813800,66944,39613544,3136,256,64};
int meta_buf_11[] = {83328,38007912,39613544,40416360,256,256,256,256,3136};
int meta_buf_12[] = {40416360,83584,50827880,3136,64,256};
int meta_buf_13[] = {99968,50827880,48820840,64,64,64,3136};
int meta_buf_14[] = {48820840,27370600,1,64,56,56,56,56,3,3,1,1,1,1,1,1};
int meta_buf_15[] = {27370600,100032,50225768,3136,64,576};
int meta_buf_16[] = {136896,50225768,50225768,64,64,64,3136};
int meta_buf_17[] = {50225768,136960,37205096,3136,256,64};
int meta_buf_18[] = {153344,37205096,40416360,37205096,256,256,256,256,3136};
int meta_buf_19[] = {37205096,153600,49222248,3136,64,256};
int meta_buf_20[] = {169984,49222248,49021544,64,64,64,3136};
int meta_buf_21[] = {49021544,29176936,1,64,56,56,56,56,3,3,1,1,1,1,1,1};
int meta_buf_22[] = {29176936,170048,49422952,3136,64,576};
int meta_buf_23[] = {206912,49422952,49623656,64,64,64,3136};
int meta_buf_24[] = {49623656,206976,38810728,3136,256,64};
int meta_buf_25[] = {223360,37205096,38810728,37205096,256,256,256,256,3136};
int meta_buf_26[] = {37205096,49824360,1,256,56,56,28,28,1,1,1,1,2,2,0,0};
int meta_buf_27[] = {49824360,223616,53286504,784,128,256};
int meta_buf_28[] = {256384,53286504,53286504,128,128,128,784};
int meta_buf_29[] = {53286504,35499112,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_30[] = {35499112,256512,53386856,784,128,1152};
int meta_buf_31[] = {403968,53386856,53487208,128,128,128,784};
int meta_buf_32[] = {53487208,404096,45534312,784,512,128};
int meta_buf_33[] = {37205096,51229288,1,256,56,56,28,28,1,1,1,1,2,2,0,0};
int meta_buf_34[] = {51229288,469632,44731496,784,512,256};
int meta_buf_35[] = {600704,44731496,45534312,44731496,512,512,512,512,784};
int meta_buf_36[] = {44731496,601216,52082280,784,128,512};
int meta_buf_37[] = {666752,52082280,52082280,128,128,128,784};
int meta_buf_38[] = {52082280,34595944,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_39[] = {34595944,666880,52684392,784,128,1152};
int meta_buf_40[] = {814336,52684392,52282984,128,128,128,784};
int meta_buf_41[] = {52282984,814464,43928680,784,512,128};
int meta_buf_42[] = {880000,44731496,43928680,44731496,512,512,512,512,784};
int meta_buf_43[] = {44731496,880512,51680872,784,128,512};
int meta_buf_44[] = {946048,51680872,51680872,128,128,128,784};
int meta_buf_45[] = {51680872,32789608,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_46[] = {32789608,946176,52182632,784,128,1152};
int meta_buf_47[] = {1093632,52182632,52885096,128,128,128,784};
int meta_buf_48[] = {52885096,1093760,44330088,784,512,128};
int meta_buf_49[] = {1159296,44330088,44731496,44330088,512,512,512,512,784};
int meta_buf_50[] = {44330088,1159808,51881576,784,128,512};
int meta_buf_51[] = {1225344,51881576,52584040,128,128,128,784};
int meta_buf_52[] = {52584040,33692776,1,128,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_53[] = {33692776,1225472,52784744,784,128,1152};
int meta_buf_54[] = {1372928,52784744,52985448,128,128,128,784};
int meta_buf_55[] = {52985448,1373056,45132904,784,512,128};
int meta_buf_56[] = {1438592,44330088,45132904,44330088,512,512,512,512,784};
int meta_buf_57[] = {44330088,53085800,1,512,28,28,14,14,1,1,1,1,2,2,0,0};
int meta_buf_58[] = {53085800,1439104,54591080,196,256,512};
int meta_buf_59[] = {1570176,54591080,54340200,256,256,256,196};
int meta_buf_60[] = {54340200,42573928,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_61[] = {42573928,1570432,54239848,196,256,2304};
int meta_buf_62[] = {2160256,54239848,54139496,256,256,256,196};
int meta_buf_63[] = {54139496,2160512,48218728,196,1024,256};
int meta_buf_64[] = {44330088,53186152,1,512,28,28,14,14,1,1,1,1,2,2,0,0};
int meta_buf_65[] = {53186152,2422656,50426472,196,1024,512};
int meta_buf_66[] = {2946944,50426472,48218728,50025064,1024,1024,1024,1024,196};
int meta_buf_67[] = {50025064,2947968,54189672,196,256,1024};
int meta_buf_68[] = {3210112,54189672,54540904,256,256,256,196};
int meta_buf_69[] = {54540904,43025512,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_70[] = {43025512,3210368,54290024,196,256,2304};
int meta_buf_71[] = {3800192,54290024,54390376,256,256,256,196};
int meta_buf_72[] = {54390376,3800448,50627176,196,1024,256};
int meta_buf_73[] = {4062592,50025064,50627176,50025064,1024,1024,1024,1024,196};
int meta_buf_74[] = {50025064,4063616,54641256,196,256,1024};
int meta_buf_75[] = {4325760,54641256,54490728,256,256,256,196};
int meta_buf_76[] = {54490728,43477096,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_77[] = {43477096,4326016,54440552,196,256,2304};
int meta_buf_78[] = {4915840,54440552,54440552,256,256,256,196};
int meta_buf_79[] = {54440552,4916096,48018024,196,1024,256};
int meta_buf_80[] = {5178240,50025064,48018024,47215208,1024,1024,1024,1024,196};
int meta_buf_81[] = {47215208,5179264,53888616,196,256,1024};
int meta_buf_82[] = {5441408,53888616,53888616,256,256,256,196};
int meta_buf_83[] = {53888616,41219176,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_84[] = {41219176,5441664,53637736,196,256,2304};
int meta_buf_85[] = {6031488,53637736,53637736,256,256,256,196};
int meta_buf_86[] = {53637736,6031744,47014504,196,1024,256};
int meta_buf_87[] = {6293888,47215208,47014504,47215208,1024,1024,1024,1024,196};
int meta_buf_88[] = {47215208,6294912,53738088,196,256,1024};
int meta_buf_89[] = {6557056,53738088,53788264,256,256,256,196};
int meta_buf_90[] = {53788264,41670760,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_91[] = {41670760,6557312,53838440,196,256,2304};
int meta_buf_92[] = {7147136,53838440,53938792,256,256,256,196};
int meta_buf_93[] = {53938792,7147392,47616616,196,1024,256};
int meta_buf_94[] = {7409536,47616616,47215208,47415912,1024,1024,1024,1024,196};
int meta_buf_95[] = {47415912,7410560,53687912,196,256,1024};
int meta_buf_96[] = {7672704,53687912,53687912,256,256,256,196};
int meta_buf_97[] = {53687912,42122344,1,256,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_98[] = {42122344,7672960,54039144,196,256,2304};
int meta_buf_99[] = {8262784,54039144,54089320,256,256,256,196};
int meta_buf_100[] = {54089320,8263040,47817320,196,1024,256};
int meta_buf_101[] = {8525184,47415912,47817320,46613096,1024,1024,1024,1024,196};
int meta_buf_102[] = {46613096,53587560,1,1024,14,14,7,7,1,1,1,1,2,2,0,0};
int meta_buf_103[] = {53587560,8526208,54741608,49,512,1024};
int meta_buf_104[] = {9050496,54741608,54716520,512,512,512,49};
int meta_buf_105[] = {54716520,46161512,1,512,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_106[] = {46161512,9051008,54791784,49,512,4608};
int meta_buf_107[] = {11410304,54791784,54766696,512,512,512,49};
int meta_buf_108[] = {54766696,11410816,51981928,49,2048,512};
int meta_buf_109[] = {46613096,53988968,1,1024,14,14,7,7,1,1,1,1,2,2,0,0};
int meta_buf_110[] = {53988968,12459392,52483688,49,2048,1024};
int meta_buf_111[] = {14556544,51981928,52483688,52383336,2048,2048,2048,2048,49};
int meta_buf_112[] = {52383336,14558592,54816872,49,512,2048};
int meta_buf_113[] = {15607168,54816872,54867048,512,512,512,49};
int meta_buf_114[] = {54867048,46387304,1,512,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_115[] = {46387304,15607680,54917224,49,512,4608};
int meta_buf_116[] = {17966976,54917224,54892136,512,512,512,49};
int meta_buf_117[] = {54892136,17967488,51781224,49,2048,512};
int meta_buf_118[] = {19016064,51781224,52383336,51781224,2048,2048,2048,2048,49};
int meta_buf_119[] = {51781224,19018112,54841960,49,512,2048};
int meta_buf_120[] = {20066688,54841960,54841960,512,512,512,49};
int meta_buf_121[] = {54841960,45935720,1,512,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_122[] = {45935720,20067200,54691432,49,512,4608};
int meta_buf_123[] = {22426496,54691432,54691432,512,512,512,49};
int meta_buf_124[] = {54691432,22427008,51580520,49,2048,512};
int meta_buf_125[] = {23475584,51580520,51781224,51580520,2048,2048,2048,2048,49};
int meta_buf_126[] = {51580520,54942312,1,7,7,2048,1,1,7,7,1,1,0,0};
int meta_buf_127[] = {54942312,23477632,54944360,1,1000,2048};
int meta_buf_128[] = {25525632,54944360,54944360,1000};
int meta_buf_129[] = {54944360,54944360,1,1000};
int* meta_buffers[] = {meta_buf_0,meta_buf_1,meta_buf_2,meta_buf_3,meta_buf_4,meta_buf_5,meta_buf_6,meta_buf_7,meta_buf_8,meta_buf_9,meta_buf_10,meta_buf_11,meta_buf_12,meta_buf_13,meta_buf_14,meta_buf_15,meta_buf_16,meta_buf_17,meta_buf_18,meta_buf_19,meta_buf_20,meta_buf_21,meta_buf_22,meta_buf_23,meta_buf_24,meta_buf_25,meta_buf_26,meta_buf_27,meta_buf_28,meta_buf_29,meta_buf_30,meta_buf_31,meta_buf_32,meta_buf_33,meta_buf_34,meta_buf_35,meta_buf_36,meta_buf_37,meta_buf_38,meta_buf_39,meta_buf_40,meta_buf_41,meta_buf_42,meta_buf_43,meta_buf_44,meta_buf_45,meta_buf_46,meta_buf_47,meta_buf_48,meta_buf_49,meta_buf_50,meta_buf_51,meta_buf_52,meta_buf_53,meta_buf_54,meta_buf_55,meta_buf_56,meta_buf_57,meta_buf_58,meta_buf_59,meta_buf_60,meta_buf_61,meta_buf_62,meta_buf_63,meta_buf_64,meta_buf_65,meta_buf_66,meta_buf_67,meta_buf_68,meta_buf_69,meta_buf_70,meta_buf_71,meta_buf_72,meta_buf_73,meta_buf_74,meta_buf_75,meta_buf_76,meta_buf_77,meta_buf_78,meta_buf_79,meta_buf_80,meta_buf_81,meta_buf_82,meta_buf_83,meta_buf_84,meta_buf_85,meta_buf_86,meta_buf_87,meta_buf_88,meta_buf_89,meta_buf_90,meta_buf_91,meta_buf_92,meta_buf_93,meta_buf_94,meta_buf_95,meta_buf_96,meta_buf_97,meta_buf_98,meta_buf_99,meta_buf_100,meta_buf_101,meta_buf_102,meta_buf_103,meta_buf_104,meta_buf_105,meta_buf_106,meta_buf_107,meta_buf_108,meta_buf_109,meta_buf_110,meta_buf_111,meta_buf_112,meta_buf_113,meta_buf_114,meta_buf_115,meta_buf_116,meta_buf_117,meta_buf_118,meta_buf_119,meta_buf_120,meta_buf_121,meta_buf_122,meta_buf_123,meta_buf_124,meta_buf_125,meta_buf_126,meta_buf_127,meta_buf_128,meta_buf_129};

extern "C" void init() {
    //static_buffer = (float*)malloc(54945360 * sizeof(float));
}

extern "C" float* get_static_buffer(void) {
    return static_buffer;
}

extern "C" float* allocate_dynamic_buffer(int count) {
    if (dynamic_buffer) {
        free(dynamic_buffer);
        dynamic_buffer = nullptr;
    }
    dynamic_buffer = (float*)malloc(count * sizeof(float));
    return dynamic_buffer;
}

extern "C" float* get_dynamic_buffer(void) {
    return dynamic_buffer;
}
extern "C" void set_placeholder_value(int kernel_order, int offset, int value) {
    meta_buffers[kernel_order][offset] = value;
}

void im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(const int * meta_buffer)
{
    const float *im = (static_buffer + meta_buffer[0]);
    float *col = (static_buffer + meta_buffer[1]);

    const int N = meta_buffer[2];
    const int C1 = meta_buffer[3];
    const int H1 = meta_buffer[4];
    const int W1 = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int DH = meta_buffer[10];
    const int DW = meta_buffer[11];
    const int SH = meta_buffer[12];
    const int SW = meta_buffer[13];
    const int PH = meta_buffer[14];
    const int PW = meta_buffer[15];

    for (int gid = 0; gid < N*H2*W2*KH*KW*C1; gid += 1) {
        const int c1 = gid % C1;
        const int kw = gid / C1 % KW;
        const int kh = gid / C1 / KW % KH;
        const int w2 = gid / C1 / KW / KH % W2;
        const int h2 = gid / C1 / KW / KH / W2 % H2;
        const int  n = gid / C1 / KW / KH / W2 / H2;

        const int h1 = h2 * SH - PH + kh * DH;
        const int w1 = w2 * SW - PW + kw * DW;

        col[gid] = (h1 < 0 || h1 >= H1 || w1 < 0 || w1 >= W1) ? 0 : im[((n*H1+h1)*W1+w1)*C1+c1];
    }
}


#ifndef INCLUDE_EIGEN
#define INCLUDE_EIGEN
#include <Eigen/Dense>
#endif

void tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(const int * meta_buffer)
{
    float *A = (static_buffer + meta_buffer[0]);
    float *B = (static_buffer + meta_buffer[1]);
    float *C = (static_buffer + meta_buffer[2]);

    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > a_mat(A, meta_buffer[3], meta_buffer[5]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::ColMajor> > b_mat(B, meta_buffer[5], meta_buffer[4]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > c_mat(C, meta_buffer[3], meta_buffer[4]);

    c_mat.noalias() = a_mat * b_mat;
}


void fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    float * v3 = (static_buffer + meta_buffer[2]);
    const int v4 = meta_buffer[3];
    const int v5 = meta_buffer[4];
    const int D0 = meta_buffer[5];
    const int D1 = meta_buffer[6];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v6 = v1[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v7 = v2[d0 + d1*v4];
            float v8;
            {
                v8 = v7 + v6;
            }
            float v9;
            {
                v9 = v8 > 0 ? v8 : 0;
            }
            v3[d0 + d1*v5] = v9;
        }
    }
}


void maxpooling2d_386ebef75ea973afd833e12e5ea8f6c97456944cd3812afb94b9bb4e(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int H1 = meta_buffer[3];
    const int W1 = meta_buffer[4];
    const int C = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];

    for (int gid = 0; gid < N * H2 * W2 * C; gid += 1) {
        const int c = gid % C;
        const int w2 = gid / C % W2;
        const int h2 = gid / C / W2 % H2;
        const int n = gid / C / W2 / H2;

        float v = -1e7;
        for (int kh = 0; kh < KH; kh++) {
            const int h1 = h2 * SH - PH + kh;
            if (h1 < 0 || h1 >= H1) continue;

            for (int kw = 0; kw < KW; kw++) {
                const int w1 = w2 * SW - PW + kw;
                if (w1 < 0 || w1 >= W1) continue;

                v = v > X[((n * H1 + h1) * W1 + w1) * C + c] ? v : X[((n * H1 + h1) * W1 + w1) * C + c];
            }
        }

        Y[gid] = v;
    }
}


void fusedelementwise_965d8d3ad02bfb2f7e604c0a789c4fea70566ad69fb364c579fef1ea(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int D0 = meta_buffer[7];
    const int D1 = meta_buffer[8];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v8 = v1[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v2[d0 + d1*v5];
            const float v10 = v3[d0 + d1*v6];
            float v11;
            {
                v11 = v9 + v10;
            }
            float v12;
            {
                v12 = v11 + v8;
            }
            float v13;
            {
                v13 = v12 > 0 ? v12 : 0;
            }
            v4[d0 + d1*v7] = v13;
        }
    }
}


void fusedelementwise_6bd1fd35f142c149f2167ed572e71f80637041012711aaf07fbcfc1b(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int D0 = meta_buffer[7];
    const int D1 = meta_buffer[8];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v8 = v1[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v2[d0 + d1*v5];
            const float v10 = v3[d0 + d1*v6];
            float v11;
            {
                v11 = v9 + v10;
            }
            float v12;
            {
                v12 = v8 + v11;
            }
            float v13;
            {
                v13 = v12 > 0 ? v12 : 0;
            }
            v4[d0 + d1*v7] = v13;
        }
    }
}


void fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int D0 = meta_buffer[7];
    const int D1 = meta_buffer[8];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v8 = v1[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v2[d0 + d1*v5];
            const float v10 = v3[d0 + d1*v6];
            float v11;
            {
                v11 = v10 + v9;
            }
            float v12;
            {
                v12 = v8 + v11;
            }
            float v13;
            {
                v13 = v12 > 0 ? v12 : 0;
            }
            v4[d0 + d1*v7] = v13;
        }
    }
}


void fusedelementwise_ed8163e6334b62b7e237abe4ab67eda0d3bcac5e83594d63f5216a4e(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int D0 = meta_buffer[7];
    const int D1 = meta_buffer[8];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v8 = v1[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v2[d0 + d1*v5];
            const float v10 = v3[d0 + d1*v6];
            float v11;
            {
                v11 = v10 + v9;
            }
            float v12;
            {
                v12 = v11 + v8;
            }
            float v13;
            {
                v13 = v12 > 0 ? v12 : 0;
            }
            v4[d0 + d1*v7] = v13;
        }
    }
}


void averagepooling2d_315133a9f01ff68a853da10590f9591258950d2d5ab8b7bac49ab0ea(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int H1 = meta_buffer[3];
    const int W1 = meta_buffer[4];
    const int C = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];

    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];

    for (int gid = 0; gid < N * H2 * W2 * C; gid += 1) {
        const int c = gid % C;
        const int w2 = gid / C % W2;
        const int h2 = gid / C / W2 % H2;
        const int n = gid / C / W2 / H2;

        float v = 0;
        
        for (int kh = 0; kh < KH; kh++) {
            const int h1 = h2 * SH - PH + kh;
            if (h1 < 0 || h1 >= H1) continue;

            for (int kw = 0; kw < KW; kw++) {
                const int w1 = w2 * SW - PW + kw;
                if (w1 < 0 || w1 >= W1) continue;

                v += X[((n * H1 + h1) * W1 + w1) * C + c];
                
            }
        }
        v /= KH * KW;

        Y[gid] = v;
    }
}


void elementwiseadd_98450d361d3b8b06ad718e1e961bda61506f2baab3157c18aecbf897(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    float * v3 = (static_buffer + meta_buffer[2]);
    const int D0 = meta_buffer[3];
    int d0;
    for (d0 = 0; d0 < D0; d0 += 1) {
        const float v4 = v1[d0];
        const float v5 = v2[d0];
        float v6;
        {
            v6 = v5 + v4;
        }
        v3[d0] = v6;
    }
}


void softmax_be4c2fae32b9326b0ca891226ac9234de828aecba508a30394d8a57e(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int C = meta_buffer[3];

    for (int n = 0; n < N; n++) {
        float set_max = X[n * C];
        for (int c = 0; c < C; c++) {
            float val = X[n * C + c];
            if (val > set_max) {
                set_max = val;
            }
        }

        float sum_exp = 0.0F;
        for (int c = 0; c < C; c++) {
            float val = X[n * C + c];
            float exp_x = expf(val - set_max);
            sum_exp += exp_x;
            Y[n * C + c] = exp_x;
        }

        for (int c = 0; c < C; c++) {
            Y[n * C + c] /= sum_exp;
        }
    }
}

extern "C" void run() {
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_0);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_1);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_2);
maxpooling2d_386ebef75ea973afd833e12e5ea8f6c97456944cd3812afb94b9bb4e(meta_buf_3);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_4);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_5);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_6);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_7);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_8);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_9);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_10);
fusedelementwise_965d8d3ad02bfb2f7e604c0a789c4fea70566ad69fb364c579fef1ea(meta_buf_11);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_12);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_13);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_14);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_15);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_16);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_17);
fusedelementwise_6bd1fd35f142c149f2167ed572e71f80637041012711aaf07fbcfc1b(meta_buf_18);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_19);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_20);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_21);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_22);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_23);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_24);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_25);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_26);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_27);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_28);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_29);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_30);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_31);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_32);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_33);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_34);
fusedelementwise_ed8163e6334b62b7e237abe4ab67eda0d3bcac5e83594d63f5216a4e(meta_buf_35);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_36);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_37);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_38);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_39);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_40);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_41);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_42);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_43);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_44);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_45);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_46);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_47);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_48);
fusedelementwise_6bd1fd35f142c149f2167ed572e71f80637041012711aaf07fbcfc1b(meta_buf_49);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_50);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_51);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_52);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_53);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_54);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_55);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_56);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_57);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_58);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_59);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_60);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_61);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_62);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_63);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_64);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_65);
fusedelementwise_ed8163e6334b62b7e237abe4ab67eda0d3bcac5e83594d63f5216a4e(meta_buf_66);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_67);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_68);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_69);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_70);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_71);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_72);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_73);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_74);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_75);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_76);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_77);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_78);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_79);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_80);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_81);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_82);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_83);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_84);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_85);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_86);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_87);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_88);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_89);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_90);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_91);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_92);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_93);
fusedelementwise_6bd1fd35f142c149f2167ed572e71f80637041012711aaf07fbcfc1b(meta_buf_94);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_95);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_96);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_97);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_98);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_99);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_100);
fusedelementwise_707f5c9b7650163b59a77eb2deeccfc5d671f335a0cdbba556f96548(meta_buf_101);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_102);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_103);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_104);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_105);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_106);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_107);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_108);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_109);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_110);
fusedelementwise_965d8d3ad02bfb2f7e604c0a789c4fea70566ad69fb364c579fef1ea(meta_buf_111);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_112);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_113);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_114);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_115);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_116);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_117);
fusedelementwise_6bd1fd35f142c149f2167ed572e71f80637041012711aaf07fbcfc1b(meta_buf_118);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_119);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_120);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_121);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_122);
fusedelementwise_39f491a753592bd6d9a83c6f76917012b5eb3c0ac597e095aa174319(meta_buf_123);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_124);
fusedelementwise_6bd1fd35f142c149f2167ed572e71f80637041012711aaf07fbcfc1b(meta_buf_125);
averagepooling2d_315133a9f01ff68a853da10590f9591258950d2d5ab8b7bac49ab0ea(meta_buf_126);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_127);
elementwiseadd_98450d361d3b8b06ad718e1e961bda61506f2baab3157c18aecbf897(meta_buf_128);
softmax_be4c2fae32b9326b0ca891226ac9234de828aecba508a30394d8a57e(meta_buf_129);

}

