#ifndef MODELGAIN0_H_INCLUDED
#define MODELGAIN0_H_INCLUDED

#include "GainStageML.h"

GainStageModel<16, float> ModelGain0 = {
    {{ // GRUKernelWeights
        0.11278465f,  0.18422566f,  0.02588048f, -0.19798496f, -0.00439443f, -0.14536698f,
       -0.05871213f,  0.05862301f, -0.21124566f,  0.09156726f,  0.11798698f,  0.29000708f,
       -0.22593777f,  0.02777318f, -0.16820474f,  0.1555053f,   0.08541053f,  0.2172122f,
        0.02365478f, -0.13997027f, -0.23096782f,  0.36191943f,  0.43721986f,  0.51476485f,
        0.01098049f, -0.33033827f,  0.06522381f, -0.04483172f,  0.27477947f,  0.19207618f,
        0.13714637f,  0.13918512f,  0.3716919f,   0.01899081f,  0.09028513f, -0.26900256f,
       -0.5081878f,  -0.38552254f,  0.4269269f,   0.1860728f,  -0.13089678f, -0.492611f,
       -0.5001868f,  -0.0847389f,   0.22352892f,  0.14070326f, -0.3694086f,   0.61207145f
    }},

    {{ // GRURecurrentWeights
        -1.18400045e-01, -6.78580254e-02, -4.40833658e-01,  2.81755060e-01,
        -1.54680684e-01,  3.02847654e-01,  6.70087710e-02,  2.78273597e-02,
        -7.25981444e-02, -6.08915575e-02,  2.92843372e-01, -9.44709480e-02,
         3.48336548e-01, -1.77853361e-01,  1.98272437e-01, -5.99659681e-01,
        -2.59070188e-01, -1.19882688e-01, -2.51387864e-01, -3.69722731e-02,
        -4.87642527e-01, -3.15237254e-01, -2.84818020e-02,  1.28413737e-01,
         2.31568422e-02, -2.37231255e-02, -2.54020602e-01,  7.78017491e-02,
        -1.67135783e-02,  3.74625847e-02, -2.08739325e-01,  1.74911574e-01,
         2.26223201e-01,  1.43547878e-01,  3.13207477e-01, -1.02010950e-01,
        -1.54390680e-02, -2.45458782e-01,  1.35715976e-02,  4.00424302e-01,
        -2.67262042e-01, -6.23632967e-02, -1.96738601e-01,  6.05408959e-02,
        -3.37350518e-02,  9.05191675e-02, -1.70603812e-01,  5.67172430e-02 },
       { 1.92105845e-02, -5.64428382e-02,  1.13768868e-01, -2.06363842e-01,
        -3.00717801e-01, -3.72212857e-01, -1.78362519e-01, -1.94482148e-01,
        -4.91321355e-01, -1.88458897e-02, -4.61100489e-01, -1.27258182e-01,
        -9.20863003e-02, -4.77647722e-01, -2.79287905e-01, -4.09093827e-01,
         4.92454588e-01,  1.33794770e-01, -1.66707143e-01, -9.35594458e-03,
         2.21041236e-02,  3.47339451e-01, -9.59253162e-02,  7.33052641e-02,
         2.41020307e-01,  4.08570677e-01,  1.63175121e-01,  3.24039698e-01,
         2.09969535e-01,  3.89852643e-01,  3.18633206e-02,  3.23597789e-01,
         7.47098625e-02,  3.82834941e-01, -2.72226930e-01,  8.70495737e-02,
         3.16305965e-01,  1.00933082e-01,  2.56966539e-02,  1.39307261e-01,
         1.50312051e-01,  4.37821038e-02, -1.84187014e-02, -2.04122543e-01,
         1.04002096e-01, -1.73177049e-01, -1.80833012e-01, -2.48042315e-01 },
       {-4.35887814e-01, -3.66846114e-01, -3.03562075e-01, -4.02096987e-01,
        -2.95587599e-01,  5.39018959e-02, -2.25480899e-01, -6.07822657e-01,
        -5.56368530e-01, -3.02688330e-01, -6.29991069e-02, -2.94754714e-01,
        -2.58039743e-01, -4.93470520e-01, -2.75631487e-01, -2.49053031e-01,
         1.33354843e-01,  3.76157820e-01,  1.60531640e-01,  3.41506779e-01,
        -1.48359984e-01, -5.16851470e-02,  1.07380271e-01,  1.53599441e-01,
         5.86653411e-01,  1.71169028e-01,  3.47157925e-01,  3.64450753e-01,
         1.66128933e-01,  1.76701412e-01, -1.26659274e-01,  4.74103481e-01,
         1.35696484e-02,  3.29999998e-02, -2.07296312e-01,  3.04413497e-01,
         5.54953143e-02,  7.00740442e-02, -1.15827108e-02, -5.69556542e-02,
         3.13427001e-01,  2.59138674e-01,  3.93295318e-01, -3.04851085e-01,
        -1.02562882e-01, -2.10513219e-01,  8.71592090e-02, -4.93490636e-01 },
       {-5.94713725e-03,  1.74121171e-01, -3.68420780e-01,  1.78412661e-01,
         3.93906236e-02, -2.89502293e-01, -2.92998493e-01,  1.15648337e-01,
         5.90763194e-03,  1.06666483e-01, -2.03911588e-01,  4.84810740e-01,
         9.80802998e-02,  5.08533955e-01,  2.12596983e-01, -3.43269296e-02,
         2.20255986e-01,  1.93047523e-01,  9.12738591e-02,  1.07342906e-01,
         9.81217325e-02,  2.37028569e-01, -2.51636803e-02,  3.32427531e-01,
         1.62667900e-01, -1.00935489e-01,  1.93163514e-01,  2.01797813e-01,
         3.28057349e-01, -8.13545138e-02, -1.67816561e-02, -9.49691609e-02,
        -4.58516926e-01, -2.26724714e-01, -2.86782891e-01,  3.31753910e-01,
         3.15982610e-01,  3.18193942e-01,  1.30118519e-01, -3.44274908e-01,
         3.32927912e-01,  1.57690108e-01,  1.76968753e-01, -3.94541383e-01,
        -3.04047555e-01, -2.25836560e-01,  1.42937541e-01, -1.22598529e-01 },
       {-7.95080215e-02,  1.69383869e-01,  7.90313929e-02, -3.86042506e-01,
        -3.32425565e-01, -2.73296118e-01, -4.94892478e-01, -1.03236444e-01,
        -2.26484895e-01, -7.25974292e-02, -1.15551390e-01,  1.36060059e-01,
        -3.24077368e-01, -3.89924794e-01, -4.56183732e-01,  3.65534395e-01,
         2.58329928e-01,  1.62191063e-01, -4.00973350e-01, -6.55458122e-03,
         1.60121769e-01,  2.09454343e-01, -3.17475826e-01, -1.98005699e-02,
         3.20747159e-02,  1.72668342e-02,  1.84866503e-01,  1.40887145e-02,
         7.32097551e-02, -8.46785530e-02, -1.14173040e-01, -2.37354383e-01,
        -2.20106885e-01, -3.98783386e-02,  1.16077058e-01,  1.24259619e-02,
         1.40764743e-01,  1.77989513e-01, -2.71249443e-01, -3.07745188e-01,
         3.84533614e-01,  2.80190796e-01,  1.87715307e-01, -2.25398466e-01,
        -9.53690484e-02, -2.07215458e-01,  2.28609275e-02, -1.36130929e-01 },
       { 2.19429776e-01, -4.36126776e-02,  1.18673429e-01, -3.89097989e-01,
         4.76979427e-02,  6.55487776e-02,  3.30130458e-01,  2.67338425e-01,
         1.21463805e-01,  1.58749953e-01,  2.12458029e-01,  2.36192465e-01,
        -1.56955078e-01,  1.89933665e-02,  9.02154595e-02,  1.64201409e-01,
         1.99138343e-01, -2.31693968e-01, -1.72028139e-01, -1.13284864e-01,
         2.39620939e-01,  2.07279652e-01, -8.76791105e-02,  2.28553236e-01,
         1.53771520e-01,  3.49072933e-01,  2.98465252e-01,  1.63999479e-02,
         2.20624417e-01,  4.22103293e-02, -2.39031222e-02, -2.20103115e-01,
         2.35165693e-02, -4.02899206e-01, -9.25707892e-02,  1.99545875e-01,
        -4.66446765e-02,  3.04800957e-01, -1.39581719e-02, -1.99866816e-01,
         2.97910750e-01,  1.93859324e-01,  7.92282540e-03, -2.20544338e-01,
        -6.16299510e-02,  9.87590253e-02,  2.98384000e-02,  4.44034338e-02 },
       {-2.81316370e-01, -2.14697883e-01, -3.10597181e-01,  6.96327770e-03,
        -4.35296506e-01, -1.05647266e-01, -1.53901860e-01, -1.68102115e-01,
        -3.26979794e-02, -2.42278174e-01, -5.36761403e-01,  2.50586480e-01,
        -2.21004203e-01, -1.72625884e-01, -2.21971810e-01, -5.00164211e-01,
         2.60409638e-02, -3.93976867e-02,  3.54935050e-01, -1.34814486e-01,
        -5.41986883e-01, -5.51481210e-02,  2.00448900e-01, -2.60225758e-02,
         1.68233052e-01, -5.74816346e-01, -1.90926239e-01, -4.62397598e-02,
        -1.59682721e-01, -1.12900406e-01,  2.31499642e-01,  3.60261112e-01,
         2.47313529e-01,  1.80846304e-01,  5.64218581e-01, -2.61916816e-01,
        -2.10349232e-01, -1.78992376e-01,  6.12598509e-02,  1.07887760e-01,
        -1.33783370e-01, -6.56361207e-02, -3.36987704e-01,  3.18508089e-01,
         2.26489931e-01,  5.35742007e-02, -1.50000304e-01, -8.47469121e-02 },
       { 4.36823487e-01, -2.17533186e-02,  5.61554134e-01,  2.51825005e-01,
         2.61794895e-01,  3.68928522e-01,  3.11054349e-01,  2.99414814e-01,
         2.42631182e-01,  2.34039828e-01,  5.05691528e-01,  1.74148485e-01,
         1.77317709e-01,  1.12997321e-02,  8.02582316e-03, -9.33355652e-03,
         4.73232754e-03, -1.60075039e-01, -3.31688851e-01,  3.47807795e-01,
         3.54520194e-02, -8.32664296e-02, -7.56023675e-02, -2.44421020e-01,
         7.72367120e-02,  4.14532989e-01,  1.84892818e-01,  2.49993429e-01,
         4.96974289e-02,  1.53025553e-01,  6.52753264e-02,  1.43327326e-01,
         3.89588475e-02,  1.77187890e-01,  2.20523581e-01, -3.15898001e-01,
         2.17995822e-01,  6.68709278e-02,  9.72512662e-02,  9.35590342e-02,
         1.32491544e-01, -5.79845533e-02,  2.06402689e-01,  5.12340188e-01,
         6.71122037e-03, -1.03937984e-01,  1.33421153e-01, -1.11411951e-01 },
       {-3.48553628e-01, -4.45979089e-01, -3.47271472e-01, -3.25956583e-01,
        -3.28183621e-01, -1.88539445e-01, -5.85076332e-01, -9.20418426e-02,
         3.72886136e-02, -4.85454738e-01, -2.24226102e-01, -5.41920960e-02,
        -9.21209604e-02,  9.02655348e-02, -2.24905536e-01, -2.29783744e-01,
         1.29123285e-01,  2.62371123e-01,  1.81072101e-01, -2.12717831e-01,
         1.27321720e-01,  3.50496769e-01,  1.98121354e-01,  2.63908714e-01,
         1.41806528e-01, -2.09534481e-01,  8.41238722e-02,  2.82908767e-01,
         1.69648856e-01,  1.36867389e-01,  4.15283680e-01, -3.57172072e-01,
         2.17162341e-01, -2.43769214e-01,  1.00721277e-01,  7.64483288e-02,
         1.20871164e-01, -1.52251437e-01,  2.47939199e-01,  3.41162719e-02,
         1.14332095e-01, -1.20445512e-01,  2.35607754e-02, -2.88031995e-01,
         2.04066187e-02, -5.78132391e-01, -2.08834976e-01,  1.48028992e-02 },
       { 5.22694103e-02,  4.01783675e-01,  1.58232078e-01, -2.15565085e-01,
        -9.65974405e-02, -1.42730445e-01, -1.39659449e-01,  2.70122945e-01,
        -3.19304645e-01,  1.43379822e-01,  2.91107707e-02,  1.96502596e-01,
        -8.89418945e-02,  1.91785052e-01, -2.65792251e-01,  2.54335344e-01,
         3.81328315e-01, -3.42511274e-02,  3.18836942e-02,  1.53812215e-01,
         1.77298889e-01,  1.12332240e-01, -2.10284755e-01, -2.09981799e-01,
         1.03082195e-01,  1.81788057e-01,  3.90159748e-02,  1.23587951e-01,
         3.12669668e-03,  2.27201074e-01,  6.91600889e-02,  1.31468058e-01,
        -1.25591323e-01, -2.73371875e-01, -2.02157497e-01,  2.13612527e-01,
         3.33638489e-02, -1.17910855e-01, -2.20473096e-01, -1.37872458e-01,
         3.64487946e-01, -7.74268480e-03,  2.08949894e-01, -3.41404378e-01,
         1.64029025e-03, -3.47403198e-01,  1.94032937e-01,  2.45686248e-01 },
       { 9.02645849e-03,  9.43652727e-03,  4.05576944e-01, -8.28186721e-02,
         2.79118568e-01, -3.53504270e-01, -2.51947761e-01,  5.40168226e-01,
        -1.07047968e-01,  7.77255371e-02,  7.78868198e-02,  1.37816593e-01,
        -2.11618856e-01, -2.14110777e-01, -1.52788535e-01,  5.92733026e-01,
         1.53780177e-01, -8.68143290e-02,  2.04969630e-01, -3.08222901e-02,
         2.44483143e-01,  7.72669017e-02, -9.50431600e-02,  4.91270691e-01,
         7.77037963e-02,  3.51107031e-01,  1.27695844e-01, -3.04073423e-01,
         7.67463222e-02, -4.02651802e-02,  3.72528285e-02,  1.13365673e-01,
        -3.23965073e-01, -2.91744053e-01, -1.70839190e-01,  4.74448176e-03,
         3.53068680e-01,  2.73086011e-01, -1.72915757e-01, -1.04928300e-01,
         1.91742837e-01,  7.81671628e-02,  3.16593289e-01, -1.58352464e-01,
        -7.77630582e-02, -1.85926969e-03,  8.21103379e-02,  6.26913912e-04 },
       { 3.75918150e-01,  2.51267344e-01,  4.88801956e-01, -3.75661224e-01,
         1.38602585e-01,  1.33450374e-01,  3.08129285e-02, -1.16230529e-02,
        -2.52758741e-01,  2.75098860e-01,  3.45170110e-01, -5.31437546e-02,
        -3.43842298e-01,  5.23942374e-02,  2.57311296e-02,  1.83745041e-01,
        -2.72131324e-01, -6.20426238e-01, -1.19601712e-01, -1.83784187e-01,
         1.98705912e-01, -2.69407302e-01, -5.03471255e-01, -1.84413254e-01,
         1.09273024e-01,  3.39294672e-01, -9.87165645e-02, -6.84766024e-02,
        -7.23552331e-02, -7.72614479e-02,  3.05974297e-02,  3.41065004e-02,
        -2.30516315e-01,  6.18282706e-02, -6.37568608e-02,  1.28864184e-01,
         3.87918562e-01, -1.28579214e-01, -2.09195673e-01,  3.10827233e-02,
         2.13832017e-02,  4.80869822e-02,  6.55948594e-02,  2.45720252e-01,
         4.42384258e-02,  1.23423070e-01, -8.27257633e-02,  3.50181945e-02 },
       { 2.05491558e-01, -2.07547978e-01,  9.33854282e-02, -3.46480846e-01,
        -4.64871377e-02,  1.84300408e-01,  2.80172855e-04,  2.17237517e-01,
         8.76434371e-02,  3.70439813e-02,  2.80711472e-01, -1.80780143e-01,
        -1.94727421e-01,  4.69539911e-02,  8.47444087e-02, -4.89385538e-02,
        -5.39661944e-02,  7.21950978e-02, -1.32325709e-01,  1.23136036e-01,
        -2.18690142e-01, -8.09481740e-02,  6.62600547e-02, -1.13855183e-01,
        -1.02834195e-01,  9.54016596e-02, -2.89978862e-01, -7.55760027e-03,
        -1.84587851e-01,  2.60291044e-02,  2.93038301e-02, -3.56172249e-02,
        -6.63477108e-02,  4.42210734e-01,  2.64596850e-01, -2.42665187e-01,
        -1.81723461e-01, -1.86308865e-02, -1.52027100e-01,  1.95326731e-01,
        -8.76988098e-02, -2.00745761e-01, -5.53512061e-03,  2.09816068e-01,
         5.17168105e-01,  4.81247604e-01, -1.57365829e-01,  3.12987007e-02 },
       { 1.85358867e-01,  1.84901834e-01,  4.59674895e-01,  3.03816319e-01,
         1.95161939e-01, -2.40203785e-03,  2.72979558e-01,  4.31047171e-01,
         4.47496593e-01,  4.89802301e-01,  5.30742288e-01,  2.15749964e-01,
         6.71663061e-02,  5.19646145e-02,  4.63698357e-01,  3.66424948e-01,
         5.47769479e-02, -3.26952487e-01,  7.42056966e-02, -1.47134453e-01,
         3.97038072e-01, -3.97066653e-01, -2.73670435e-01, -3.52108061e-01,
        -3.79814208e-02,  1.70626789e-01, -3.10733747e-02, -2.66306162e-01,
        -2.07834661e-01, -1.19625062e-01, -4.79682505e-01, -2.90433794e-01,
        -2.86461383e-01,  1.70718785e-02, -9.39213410e-02, -1.73965409e-01,
        -2.33334020e-01,  4.43008356e-02, -1.33094832e-01,  1.71134368e-01,
        -1.30274385e-01,  1.70931324e-01,  8.94233882e-02,  2.86199868e-01,
         1.18003473e-01,  1.68377683e-01, -1.91822127e-01,  5.04265904e-01 },
       { 1.53298020e-01,  1.34225432e-02,  1.87865078e-01,  1.45276234e-01,
         8.65595721e-05,  3.66306275e-01,  2.80104339e-01,  1.68113932e-01,
         1.54983684e-01,  4.10616755e-01,  9.09536704e-02,  2.85985827e-01,
         3.37190002e-01,  3.79155010e-01,  1.80897281e-01,  5.03651679e-01,
        -1.92939728e-01, -2.24291235e-01, -1.15896150e-01, -4.33631092e-02,
         5.76325238e-01, -9.07018185e-02, -3.12879860e-01,  1.26726806e-01,
        -1.74111441e-01,  1.07727952e-01,  2.08440676e-01, -2.11128339e-01,
        -1.35509804e-01,  5.79152219e-02, -9.04181302e-02,  3.28796431e-02,
        -2.64428824e-01, -1.90260142e-01, -2.91968614e-01,  2.41336167e-01,
        -5.96877933e-02,  3.83341253e-01, -3.30290407e-01, -6.27273843e-02,
         4.94771510e-01, -8.39080885e-02,  7.46552125e-02, -4.66005653e-01,
        -6.88737035e-01, -3.29167783e-01,  1.24388747e-01, -6.53139129e-02 },
       { 2.69193828e-01, -1.09095410e-01,  3.25874865e-01,  3.28697413e-01,
         2.50461489e-01,  2.42182910e-01,  5.99556446e-01,  1.75192505e-01,
         4.62536663e-01,  4.55027997e-01,  3.59407425e-01, -2.49145120e-01,
         1.42652228e-01,  1.00898951e-01,  4.33032244e-01,  2.22922459e-01,
         5.32412753e-02,  4.70486358e-02,  1.53543591e-01,  1.32163838e-01,
         1.71172321e-01, -8.88687968e-02, -2.76252300e-01,  3.28914136e-01,
        -9.34685022e-02,  1.49125278e-01, -5.31023920e-01,  2.63597984e-02,
         1.58816665e-01, -2.55856812e-01,  2.53413081e-01, -2.40166903e-01,
         2.06787914e-01,  2.84013972e-02,  2.61354178e-01, -6.15171455e-02,
         1.37481004e-01,  1.82504624e-01, -4.25116085e-02,  1.15406178e-01,
        -1.68809488e-01, -1.20177343e-01,  1.63937330e-01,  1.73279181e-01,
         1.70456544e-01,  3.55295271e-01,  1.83174778e-02,  5.31541109e-01 }
    },

    {{ // GRUBias
       -2.71123260e-01, -1.22645140e-01, -3.38662386e-01, -2.50777155e-01, 
       -3.09829146e-01, -3.10535014e-01, -3.51668745e-01, -3.00076008e-01, 
       -4.33899254e-01, -3.69127661e-01, -2.95636237e-01, -1.73947260e-01, 
       -2.68281698e-01, -2.72659570e-01, -2.77297288e-01, -3.10606569e-01, 
        1.36322558e-01,  2.69385934e-01,  4.21693146e-01,  1.97351113e-01, 
        3.49449553e-02,  2.24245772e-01,  2.47435823e-01,  1.80428430e-01, 
        3.47252458e-01,  6.10769205e-02,  1.94036081e-01,  3.79109085e-01, 
        2.01599225e-01,  3.94704401e-01,  9.28247049e-02,  3.86405677e-01, 
        1.10211328e-01, -2.89944757e-04,  1.11546345e-01, -5.01429178e-02, 
        1.11622899e-03, -6.09503388e-02, -2.44939774e-02, -2.73022652e-01, 
        2.38049537e-01, -5.58492690e-02, -1.74545825e-01, -8.23262408e-02, 
       -1.47745401e-01, -2.65398294e-01,  1.36856213e-01, -3.38166565e-01 },
      {-2.71123260e-01, -1.22645140e-01, -3.38662386e-01, -2.50777155e-01,
       -3.09829146e-01, -3.10535014e-01, -3.51668745e-01, -3.00076008e-01,
       -4.33899254e-01, -3.69127661e-01, -2.95636237e-01, -1.73947260e-01,
       -2.68281698e-01, -2.72659570e-01, -2.77297288e-01, -3.10606569e-01,
        1.36322558e-01,  2.69385934e-01,  4.21693146e-01,  1.97351113e-01,
        3.49449553e-02,  2.24245772e-01,  2.47435823e-01,  1.80428430e-01,
        3.47252458e-01,  6.10769205e-02,  1.94036081e-01,  3.79109085e-01,
        2.01599225e-01,  3.94704401e-01,  9.28247049e-02,  3.86405677e-01,
        1.25991493e-01,  1.94218859e-01,  2.70352036e-01,  1.22636884e-01,
        8.16106945e-02, -2.55689114e-01,  2.92066723e-01,  8.48889351e-02,
        2.72961944e-01,  1.35673776e-01, -2.39206031e-01, -2.48600379e-01,
       -1.68508455e-01, -3.08808565e-01, -1.27818242e-01, -3.75328511e-01 }
    },

    { // DenseWeights
        -0.8642776f, -0.731389f,  -0.514193f,    0.8320825f,
         0.41176453f, 0.9046101f, -0.57288474f, -0.78879344f,
         0.70550317f, 0.48812f,    0.64222205f, -0.7715558f,
        -0.8916475f, -0.74556786f, 0.9193795f,  -0.55516833f
    },
    
    0.06601734f // DenseBias
};

/*
GRU Kernel Weights...
[[-0.21075739  0.6054781   1.3687366  -0.74198735  1.18403    -0.08632209
   2.8161912   0.472986    0.8656385  -0.7760961  -1.0059823   0.4806414
  -0.7475988   0.02504039 -0.25764415 -1.5902315  -0.05855808  0.18729268
   0.39133832  0.09721922 -0.2951807  -0.6268158  -0.3197776  -1.027245  ]]
GRU Recurrent Weights...
[[ 4.7428858e-01  2.0151305e+00  4.2385286e-01 -9.9104196e-01
   1.6474878e+00  7.9633319e-01  1.6663148e+00  7.4315929e-01
   2.7698568e-01 -1.0389292e-01  5.9773326e-02 -5.4592764e-01
  -1.2601462e-01 -6.2518990e-01  3.5972338e-02 -2.1107323e-01
   3.6214974e-02  3.3480129e-03  6.9292194e-01  2.3714194e-01
  -6.8074131e-01 -1.8927598e-01 -5.8977908e-01 -2.9815978e-01]
 [-1.1750870e+00 -3.7036681e-01  1.5181254e+00 -1.4100890e+00
  -7.8686923e-01 -1.0276054e+00  8.1712669e-01  9.9052870e-01
  -1.6695662e-01 -5.1752239e-01 -1.2095793e+00 -7.7408284e-02
  -6.9796586e-01 -1.8526648e-01 -4.5027810e-01 -1.2009041e-01
   3.9973557e-03  7.3732102e-01  3.6982223e-01 -3.5739943e-01
  -1.9135800e-01 -9.6629918e-02  5.1388011e-04 -1.6692568e-01]
 [-4.3396071e-01  1.3347064e+00  3.0736115e+00 -2.4538021e+00
  -3.1299475e-01 -5.0040528e-02  1.7083404e+00  1.1097524e+00
   7.5312686e-01 -3.1858498e-01 -9.7476996e-02 -9.8702863e-02
  -1.6956252e+00  1.0352992e-01  4.4634470e-01  5.7630378e-01
  -4.0485725e-01 -3.3826816e-01  9.8832440e-01 -2.3112759e-01
  -1.7318705e-01 -4.6098089e-01 -5.1831931e-01  5.4804683e-01]
 [ 1.3613020e+00  7.0442438e-01 -5.7564723e-01  1.1731999e+00
   2.9941854e-01  2.9369211e-01  2.1269675e-01 -5.5143226e-02
   2.7243041e-02  4.8489708e-01  1.6945522e-01  2.5573632e-02
   6.3084662e-01 -4.8334530e-01 -1.2896451e-01 -1.4013131e-01
   2.0921686e-01  8.3068823e-03 -1.8245604e-02  6.5433416e-03
   5.0456208e-01  6.0458642e-01 -1.0283412e-01 -1.8442123e-01]
 [ 1.0858027e+00  2.4136227e-01 -1.8394868e+00  1.5089214e+00
  -9.5842153e-01  4.6734521e-01 -4.7442460e-01  6.9863534e-01
   1.9938700e-02 -1.1741354e+00 -2.2313812e-01 -3.9719947e-04
   6.3134533e-01 -4.8691261e-01 -2.8310317e-01 -1.7637981e-01
  -1.5062104e-01  2.7976233e-01 -6.6989011e-01  3.7744969e-01
   7.1285230e-01 -2.3195742e-01  3.1418213e-01  7.0018314e-02]
 [-1.6701572e+00  5.3843576e-01  1.0068293e+00  2.8903404e-01
  -5.3835219e-01 -8.7723029e-01  4.6495497e-01 -8.8189745e-01
  -2.1405795e-01 -4.2752737e-01 -1.3722649e-01  1.5874976e-01
   1.5186422e-01  3.7349799e-01 -6.7523248e-02 -2.1317062e-01
   6.9127065e-01  9.2035818e-01 -4.8704621e-01  5.0735265e-01
  -5.3658324e-01  1.4546238e-01  1.8126504e-01  2.1616223e-01]
 [ 6.2344942e-02 -9.0996516e-01 -3.6317644e-01  1.4754311e+00
   9.6422380e-01  7.4855697e-01 -1.5507582e-02 -3.8617933e-01
   4.1391969e-01  1.2308886e-01  7.4280493e-02  5.7990444e-01
   6.2576570e-03 -7.6558940e-02  2.6747140e-01 -2.6924038e-01
   5.4430783e-01  5.1869959e-01 -6.6235340e-01  5.7182837e-01
   4.5119055e-02  5.9594953e-01  1.4766665e-01  2.2041665e-01]
 [ 1.0674412e+00  8.7621532e-02 -1.8163028e+00  3.5101917e-01
   5.6475610e-01  7.7424192e-01 -8.3166242e-02  1.0700716e+00
   3.1826931e-01  4.0626863e-01  4.7105208e-01  4.6426937e-01
   4.2077604e-01  4.5283455e-01  3.6302963e-01  2.4167582e-01
   6.5625405e-01  2.3789653e-01 -6.6008532e-01  2.7583551e-01
  -5.1536810e-01  3.1439209e-01  4.7239596e-01  1.2636654e-01]]
GRU bias...
[[ 0.652125    1.0250875  -0.91555035 -0.06568845  1.1834621   0.8506025
   0.50243276  0.48164925  0.5874946   0.5587838   0.5186577   0.2363661
   0.22475371  0.03529475  0.23252216  0.18500769  0.15227446 -0.18457718
   0.22394295 -0.12496498  0.06158604 -0.09617629  0.04273995  0.1346676 ]
 [ 0.5856071   0.9920984  -0.92830217 -0.00705122  1.1233459   0.76981544
   0.51116073  0.42689523  0.5704367   0.54970306  0.553265    0.3046113
   0.14810774  0.09177987  0.2251141   0.17360786  0.15246332 -0.24539031
  -0.10832546  0.13399844  0.10913482 -0.12836468  0.255531    0.20779873]]
Dense Kernel Weights...
[[ 0.2689306 ]
 [ 0.56197155]
 [ 0.02371717]
 [ 0.86055154]
 [-0.17022459]
 [ 0.9606014 ]
 [ 0.24872237]
 [-0.14106391]]
Dense bias...
[0.0397406]
*/

#endif // MODELGAIN0_H_INCLUDED
