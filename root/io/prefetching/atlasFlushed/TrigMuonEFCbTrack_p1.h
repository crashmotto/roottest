//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TrigMuonEFCbTrack_p1_h
#define TrigMuonEFCbTrack_p1_h
class TrigMuonEFCbTrack_p1;

#include "TPObjRef.h"

class TrigMuonEFCbTrack_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   double      m_matchChi2;    //
   TPObjRef    m_TrigMuonEFTrack;    //
   TPObjRef    m_P4IPtCotThPhiM;     //

   TrigMuonEFCbTrack_p1();
   TrigMuonEFCbTrack_p1(const TrigMuonEFCbTrack_p1 & );
   virtual ~TrigMuonEFCbTrack_p1();

};
#endif