#include "output.h"
using namespace std;

void help() {

}

void output(Config params, Data data) {
  cout << endl;
  cout << "-------------------------------------------------------------------------" << endl;
  cout << setw(6)<<"" << left << setw(3)<< "tr1"/*params.trace*/ << "." << setw(16)<<"default"/*params.setup*/ << "Simulation Results" << endl;
  cout << "-------------------------------------------------------------------------" << endl;
  cout << endl;

  cout << setw(2)<<"" << "Memory system:" << endl;
  cout << setw(4)<<"" << "Dcache size = " << 8192/*params.dcacheSize*/ << " : ways = " << 1/*params.dcacheWays*/ << " : block size = " << 32/*params.dcacheBlockSize*/ << endl;
  cout << setw(4)<<"" << "Icache size = " << 8192/*params.icacheSize*/ << " : ways = " << 1/*params.icacheWays*/ << " : block size = " << 32/*params.icacheBlockSize*/ << endl;
  cout << setw(4)<<"" << "L2-cache size = " << 32768/*params.l2cacheSize*/ << " : ways = " << 1/*params.l2cacheWays*/ << " : block size = " << 64/*params.l2cacheBlockSize*/ << endl;
  cout << setw(4)<<"" << "Memory ready time = " << 50/*params.memoryReadyTime*/ << " : chunksize = " << 8/*params.chunkSize*/ << " : chunktime = " << 15/*params.chunktime*/ << endl;
  cout << endl;

  cout << setw(2)<<"" << "Execute time = " << right << setw(12) << 678/*data.executeTime*/ << ";  Total refs = " << 10/*data.totalRefs*/ << endl;
  cout << setw(2)<<"" << "Inst refs = " << 6/*data.instructionRefs*/ << ";   Data refs = " << 4/*data.dataRefs*/ << endl;
  cout <<endl;

  cout << setw(2)<<"" << "Number of reference types:  [Percentage]" << endl;
  cout << setw(4)<<"" << "Reads  = " << right << setw(11) << 0/*data.readRefs*/ << "    [" << setw(4) << fixed << setprecision(1) << (float)0/10 *100.0/*data.readRefs/data.totalRefs*/ << "%]" << endl;
  cout << setw(4)<<"" << "Writes = " << right << setw(11) << 4/*data.writeRefs*/ << "    [" << setw(4) << fixed << setprecision(1) << (float)4/10 *100.0/*data.writeRefs/data.totalRefs*/ << "%]" << endl;
  cout << setw(4)<<"" << "Inst.  = " << right << setw(11) << 6/*data.instructionRefs*/ << "    [" << setw(4) << fixed << setprecision(1) << (float)6/10 *100.0/*data.writeRefs/data.totalRefs*/ << "%]" << endl;
  cout << setw(4)<<"" << "Total  = " << right << setw(11) << 10/*data.instructionRefs+readRefs+writeRefs*/ << endl;
  cout<<endl;

  cout << setw(2)<<"" << "Total cycles for activities:  [Percentage]" << endl;
  cout << setw(4)<<"" << "Reads  = " << right << setw(11) << 0/*data.readCycles*/ << "    [" << setw(4) << fixed << setprecision(1) << (float)0/678 *100.0/*data.readCycles/data.totalCycles*/ << "%]" << endl;
  cout << setw(4)<<"" << "Writes = " << right << setw(11) << 227/*data.writeCycles*/ << "    [" << setw(4) << fixed << setprecision(1) << (float)227/678 *100.0/*data.writeCycles/data.totalCycles*/ << "%]" << endl;
  cout << setw(4)<<"" << "Inst.  = " << right << setw(11) << 451/*data.instructionCycles*/ << "    [" << setw(4) << fixed << setprecision(1) << (float)451/678 *100.0/*data.writeCycles/data.totalCycles*/ << "%]" << endl;
  cout << setw(4)<<"" << "Total  = " << right << setw(11) << 678/*data.instructionCycles+readCycles+writeCycles*/ << endl;
  cout<<endl;

  cout << setw(2)<<"" << "CPI = " << (float)678/6 /*data.totalCycles/data.instructionRefs*/ << endl;
  cout << setw(2)<<"" << "Ideal: Exec. Time = " << 16 /*data.idealTime*/ << "; CPI = " << (float)16/6 /*data.idealTime/data.instructionRefs*/ << endl;
  cout << setw(2)<<"" << "Ideal mis-aligned: Exec. Time = " << 21 /*data.idealMisAlignedTime*/ << "; CPI = " << (float)21/6 /*data.idealMisAlignedTime/data.instructionRefs*/ << endl;
  cout << endl;

  cout << setw(2)<<"" << "Memory Level:  L1i" << endl;
  cout << setw(4)<<"" << "Hit Count = " << 5/*data.l1iHitCount*/ << "  Miss Count = " << 2/*data.l1iMissCount*/ << endl;
  cout << setw(4)<<"" << "Total Requests = " << 5+2/*data.l1iHitCount + data.l1iMissCount*/ << endl;
  cout << setw(4)<<"" << "Hit Rate = " << (float)5/7 * 100/*data.l1iHitCount/(data.l1iHitCount+l1iMissCount)*/ << "%  Miss Rate = " << (float)2/7 * 100/*data.l1iMissCount/(data.l1iHitCount+l1iMissCount)*/ << "%" << endl;
  cout << setw(4)<<"" << "Kickouts = " << 0/*data.l1iKickouts*/ << "; Dirty kickouts = " << 0/*data.l1iDirtyKickouts*/ << "; Transfers = " << 2/*data.l1iTransfers*/ << endl;
  cout << setw(4)<<"" << "VC Hit count = " << 0/*data.l1iVCHitCount*/ << endl;
  cout << endl;

  cout << setw(2)<<"" << "Memory Level:  L1d" << endl;
  cout << setw(4)<<"" << "Hit Count = " << 7/*data.l1dHitCount*/ << "  Miss Count = " << 1/*data.l1dMissCount*/ << endl;
  cout << setw(4)<<"" << "Total Requests = " << 7+1/*data.l1dHitCount + data.l1dMissCount*/ << endl;
  cout << setw(4)<<"" << "Hit Rate = " << (float)7/8 * 100/*data.l1dHitCount/(data.l1dHitCount+l1dMissCount)*/ << "%  Miss Rate = " << (float)1/8 * 100/*data.l1dMissCount/(data.l1dHitCount+l1dMissCount)*/ << "%" << endl;
  cout << setw(4)<<"" << "Kickouts = " << 0/*data.l1dKickouts*/ << "; Dirty kickouts = " << 0/*data.l1dDirtyKickouts*/ << "; Transfers = " << 1/*data.l1dTransfers*/ << endl;
  cout << setw(4)<<"" << "VC Hit count = " << 0/*data.l1dVCHitCount*/ << endl;
  cout << endl;

  cout << setw(2)<<"" << "Memory Level:  L2" << endl;
  cout << setw(4)<<"" << "Hit Count = " << 0/*data.l2HitCount*/ << "  Miss Count = " << 3/*data.l2MissCount*/ << endl;
  cout << setw(4)<<"" << "Total Requests = " << 0+3/*data.l2HitCount + data.l2MissCount*/ << endl;
  cout << setw(4)<<"" << "Hit Rate = " << (float)0/3 * 100/*data.l2HitCount/(data.l2HitCount+l2MissCount)*/ << "%  Miss Rate = " << (float)3/3 * 100/*data.l2MissCount/(data.l2HitCount+l2MissCount)*/ << "%" << endl;
  cout << setw(4)<<"" << "Kickouts = " << 0/*data.l2Kickouts*/ << "; Dirty kickouts = " << 0/*data.l2DirtyKickouts*/ << "; Transfers = " << 3/*data.l2Transfers*/ << endl;
  cout << setw(4)<<"" << "VC Hit count = " << 0/*data.l2VCHitCount*/ << endl;
  cout << endl;

  cout << setw(2)<<"" << "L1 cache cost (Icache $" << 200/*params.l1iCost*/ << ") + (Dcache $" << 200/*params.l1dCost*/ << ") = $" << 200+200/*params.l1iCost+params.l1dCost*/ << endl;
  cout << setw(2)<<"" << "L2 cache cost = $" << 100/*params.l2Cost*/ << ";  Memory cost = $" << 75/*params.memoryCost*/ << "  Total cost = $" << 200+200+100+75/*sum everything*/<< endl;
  cout << endl;

  cout << "-------------------------------------------------------------------------" << endl;
  cout << endl;

  cout << "Cache final contents - Index and Tag values are in HEX" << endl;
  cout << endl;

  int i;

  /*****    L1i Print    *****/
  cout << "Memory Level: L1i" << endl;
  for(i=0;i<2;i++) {
    cout << "Index: " << setw(4) << 0/*index*/ << " | V:" << 1/*valid*/ << " D:" << 0/*dirty*/ << " Tag: " << setw(12) << "3fc0e7112"/*dirty*/ << " |" << endl;
  }
  cout << "Victim cache:" << endl;
  for(i=0;i<8;i++) {
    if(!(i%2)) {
      cout << setw(12)<<"";
    }

    cout << "| V:" << 0/*VC-v*/ << " D:" << 0/*VC-d*/ << " Addr: " << setw(12) << "-"/*VC-address*/;

    if(i%2) {
      cout << " |" << endl;
    }
  }
  /*****  End L1i Print  *****/

  /*****    L1d Print    *****/
  cout << "Memory Level: L1d" << endl;
  for(i=0;i<2;i++) {
    cout << "Index: " << setw(4) << 0/*index*/ << " | V:" << 1/*valid*/ << " D:" << 0/*dirty*/ << " Tag: " << setw(12) << "3fc0e7112"/*dirty*/ << " |" << endl;
  }
  cout << "Victim cache:" << endl;
  for(i=0;i<8;i++) {
    if(!(i%2)) {
      cout << setw(12)<<"";
    }

    cout << "| V:" << 0/*VC-v*/ << " D:" << 0/*VC-d*/ << " Addr: " << setw(12) << "-"/*VC-address*/;

    if(i%2) {
      cout << " |" << endl;
    }
  }
  /*****  End L1d Print  *****/
  
  /*****    L2  Print    *****/
  cout << "Memory Level: L2" << endl;
  for(i=0;i<2;i++) {
    cout << "Index: " << setw(4) << 0/*index*/ << " | V:" << 1/*valid*/ << " D:" << 0/*dirty*/ << " Tag: " << setw(12) << "3fc0e7112"/*dirty*/ << " |" << endl;
  }
  cout << "Victim cache:" << endl;
  for(i=0;i<8;i++) {
    if(!(i%2)) {
      cout << setw(12)<<"";
    }

    cout << "| V:" << 0/*VC-v*/ << " D:" << 0/*VC-d*/ << " Addr: " << setw(12) << "-"/*VC-address*/;

    if(i%2) {
      cout << " |" << endl;
    }
  }
  /*****  End L2  Print  *****/
}
