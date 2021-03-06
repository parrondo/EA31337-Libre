//+------------------------------------------------------------------+
//|                 EA31337 - multi-strategy advanced trading robot. |
//|                       Copyright 2016-2019, 31337 Investments Ltd |
//|                                       https://github.com/EA31337 |
//+------------------------------------------------------------------+

/*
 *  This file is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.

 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.

 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

//+------------------------------------------------------------------+
//| Inputs.
//+------------------------------------------------------------------+

// Includes strategies.
input static string __Strategy_Timeframes__ = "-- Strategy's timeframes --"; // >>> STRATEGY'S TIMEFRAMES (1-255: M1=1,M5=2,M15=4,M30=8,H1=16,H2=32,H4=64...) <<<
input unsigned int AC_Active_Tf = 0; // AC: Activated timeframes
input unsigned int AD_Active_Tf = 0; // AD: Activated timeframes
input unsigned int ADX_Active_Tf = 0; // ADX: Activated timeframes
input unsigned int Alligator_Active_Tf = 0; // Alligator: Activated timeframes
unsigned int ATR_Active_Tf = 0; // ATR: Activated timeframes
unsigned int Awesome_Active_Tf = 0; // Awesome: Activated timeframes
input unsigned int Bands_Active_Tf = 0; // Bands: Activated timeframes
unsigned int BearsPower_Active_Tf = 0; // BearsPower: Activated timeframes
unsigned int BullsPower_Active_Tf = 0; // BullsPower: Activated timeframes
unsigned int BWMFI_Active_Tf = 0; // BWMFI: Activated timeframes
input unsigned int CCI_Active_Tf = 15; // CCI: Activated timeframes
input unsigned int DeMarker_Active_Tf = 0; // DeMarker: Activated timeframes
input unsigned int Envelopes_Active_Tf = 4; // Envelopes: Activated timeframes
input unsigned int Force_Active_Tf = 0; // Force: Activated timeframes
input unsigned int Fractals_Active_Tf = 0; // Fractals: Activated timeframes
unsigned int Gator_Active_Tf = 0; // Gator: Activated timeframes
unsigned int Ichimoku_Active_Tf = 0; // Ichimoku: Activated timeframes
unsigned int MA_Active_Tf = 0; // MA: Activated timeframes
input unsigned int MACD_Active_Tf = 0; // MACD: Activated timeframes
input unsigned int MFI_Active_Tf = 0; // MFI: Activated timeframes
unsigned int Momentum_Active_Tf = 0; // Momentum: Activated timeframes
unsigned int OBV_Active_Tf = 0; // OBV: Activated timeframes
unsigned int OsMA_Active_Tf = 0; // OsMA: Activated timeframes
input unsigned int RSI_Active_Tf = 12; // RSI: Activated timeframes
unsigned int RVI_Active_Tf = 0; // RVI: Activated timeframes
input unsigned int SAR_Active_Tf = 8; // SAR: Activated timeframes
unsigned int StdDev_Active_Tf = 0; // StdDev: Activated timeframes
unsigned int Stochastic_Active_Tf = 0; // Stochastic: Activated timeframes
input unsigned int WPR_Active_Tf = 0; // WPR: Activated timeframes
unsigned int ZigZag_Active_Tf = 0; // ZigZag: Activated timeframes

//input string __Trade_Parameters__ = "-- Trade parameters --"; // >>> TRADE <<<
//input ulong TimeframeFilter = 0; // Timeframes filter (0 - auto)
//input double MinPipChangeToTrade = 0.4; // Min pip change to trade (0 = every tick)

input string __Logging_Parameters__ = "-- Settings for logging & messages --"; // >>> LOGS & MESSAGES <<<
input bool PrintLogOnChart = true; // Display info on chart
input ENUM_LOG_LEVEL VerboseLevel = V_INFO; // Level of log verbosity
input bool WriteSummaryReport = true; // Write summary report on finish

input string __Other_Parameters__ = "-- Other parameters --"; // >>> OTHER PARAMETERS <<<
input uint MagicNumber = 31337; // Starting EA magic number

input string __EA_Parameters__ = "-- End of input parameters for " + ea_name + " v" + ea_version + " --"; // >>> EA31337 <<<