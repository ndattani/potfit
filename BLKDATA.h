c=======================================================================
c** Type statements & common block for data
c
      REAL*8  FREQ(NDATAMX),UFREQ(NDATAMX),DFREQ(NDATAMX),TEMP(NDATAMX),
     1                                               YUNC(NDATAMX),Fqb
c
      INTEGER  COUNTOT,NFS1,NFSTOT,NBANDTOT,IB(NDATAMX),JP(NDATAMX),
     1 JPP(NDATAMX),VP(NPARMX),VPP(NPARMX),EFP(NDATAMX),EFPP(NDATAMX),
     2 TVUP(NDATAMX),TVLW(NDATAMX),FSBAND(NPARMX),IFXFS(NPARMX),
     3 NFS(NPARMX),IEP(NPARMX),IEPP(NPARMX),ISTP(NPARMX),
     4 IFIRST(NPARMX),ILAST(NPARMX),NTV(NSTATEMX,NISTPMX),FSsame
c
      CHARACTER*2 NAME(2),SLABL(-5:NSTATEMX)
c
      COMMON /DATABLK/Fqb,FREQ,UFREQ,YUNC,DFREQ,TEMP,COUNTOT,NFS1,
     1 NFSTOT,NBANDTOT,IB,JP,JPP,VP,VPP,EFP,EFPP,TVUP,TVLW,FSBAND,IFXFS,
     2 NFS,IEP,IEPP,ISTP,IFIRST,ILAST,NTV,FSsame, NAME,SLABL
c=======================================================================