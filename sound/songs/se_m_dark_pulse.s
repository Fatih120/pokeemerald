	.include "MPlayDef.s"

	.equ	se_m_dark_pulse_grp, voicegroup128
	.equ	se_m_dark_pulse_pri, 4
	.equ	se_m_dark_pulse_rev, reverb_set+50
	.equ	se_m_dark_pulse_mvl, 127
	.equ	se_m_dark_pulse_key, 0
	.equ	se_m_dark_pulse_tbs, 1
	.equ	se_m_dark_pulse_exg, 0
	.equ	se_m_dark_pulse_cmp, 1

	.section .rodata
	.global	se_m_dark_pulse
	.align	2

@********************** Track  1 **********************@

se_m_dark_pulse_1:
	.byte	KEYSH , se_m_dark_pulse_key+0
	.byte	TEMPO , 150*se_m_dark_pulse_tbs/2
	.byte		VOICE , 29
	.byte		BENDR , 12
	.byte		PAN   , c_v+5
	.byte		VOL   , 21*se_m_dark_pulse_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		N10   , An2 , v127
	.byte	W02
	.byte		VOL   , 47*se_m_dark_pulse_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 88*se_m_dark_pulse_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v-5
	.byte	W01
	.byte		VOL   , 120*se_m_dark_pulse_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 21*se_m_dark_pulse_mvl/mxv
	.byte		BEND  , c_v+10
	.byte		N10   , Bn2
	.byte	W02
	.byte		PAN   , c_v+5
	.byte	W01
	.byte		VOL   , 47*se_m_dark_pulse_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		VOL   , 88*se_m_dark_pulse_mvl/mxv
	.byte	W03
	.byte		PAN   , c_v-5
	.byte		VOL   , 120*se_m_dark_pulse_mvl/mxv
	.byte	W03
	.byte		PAN   , c_v-2
	.byte		VOL   , 21*se_m_dark_pulse_mvl/mxv
	.byte		BEND  , c_v+18
	.byte		N10   , Cs3
	.byte	W03
	.byte		PAN   , c_v+5
	.byte		VOL   , 47*se_m_dark_pulse_mvl/mxv
	.byte	W02
	.byte		        88*se_m_dark_pulse_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 120*se_m_dark_pulse_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v-5
	.byte	W02
	.byte		VOL   , 20*se_m_dark_pulse_mvl/mxv
	.byte		BEND  , c_v+29
	.byte		N10   , Dn3
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 47*se_m_dark_pulse_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v+5
	.byte	W01
	.byte		VOL   , 88*se_m_dark_pulse_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v+0
	.byte		VOL   , 120*se_m_dark_pulse_mvl/mxv
	.byte	W03
	.byte		PAN   , c_v-5
	.byte	W01
	.byte		VOL   , 21*se_m_dark_pulse_mvl/mxv
	.byte		BEND  , c_v+37
	.byte		N10   , En3
	.byte	W02
	.byte		PAN   , c_v-2
	.byte		VOL   , 46*se_m_dark_pulse_mvl/mxv
	.byte	W03
	.byte		PAN   , c_v+5
	.byte		VOL   , 102*se_m_dark_pulse_mvl/mxv
	.byte	W02
	.byte		        120*se_m_dark_pulse_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W03
	.byte		        c_v-5
	.byte		VOL   , 20*se_m_dark_pulse_mvl/mxv
	.byte		BEND  , c_v+42
	.byte		N20   , Fs3
	.byte	W02
	.byte		VOL   , 47*se_m_dark_pulse_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 88*se_m_dark_pulse_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v+5
	.byte	W01
	.byte		VOL   , 120*se_m_dark_pulse_mvl/mxv
	.byte	W02
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		VOL   , 99*se_m_dark_pulse_mvl/mxv
	.byte		BEND  , c_v+50
	.byte	W02
	.byte		PAN   , c_v-5
	.byte	W01
	.byte		VOL   , 74*se_m_dark_pulse_mvl/mxv
	.byte	W01
	.byte		BEND  , c_v+56
	.byte	W01
	.byte		PAN   , c_v-2
	.byte		VOL   , 53*se_m_dark_pulse_mvl/mxv
	.byte	W03
	.byte		        34*se_m_dark_pulse_mvl/mxv
	.byte		BEND  , c_v+63
	.byte	W01
	.byte		VOL   , 15*se_m_dark_pulse_mvl/mxv
	.byte	W23
	.byte	FINE

@******************************************************@
	.align	2

se_m_dark_pulse:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_m_dark_pulse_pri	@ Priority
	.byte	se_m_dark_pulse_rev	@ Reverb.

	.word	se_m_dark_pulse_grp

	.word	se_m_dark_pulse_1

	.end
