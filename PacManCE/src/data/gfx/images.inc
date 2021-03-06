images_paletteStart:
	.dw $7c10	; 0
	.dw $0	; 1
	.dw $7fff	; 2
	.dw $1f	; 3
	.dw $7efb	; 4
	.dw $7fe0	; 5
	.dw $7308	; 6
	.dw $3ff	; 7
	.dw $7c00	; 8
	.dw $7298	; 9
	.dw $6378	; a
	.dw $1098	; b
	.dw $7310	; c
	.dw $7eff	; d
	.dw $df	; e
	.dw $7f26	; f
	.dw $6e4a	; 10
	.dw $6f7f	; 11
	.dw $3fc6	; 12
	.dw $36d5	; 13
	.dw $36ff	; 14
	.dw $7aeb	; 15
	.dw $1bff	; 16
	.dw $2108	; 17
	.dw $7ffe	; 18
	.dw $5294	; 19
	.dw $5210	; 1a
	.dw $2088	; 1b
	.dw $3188	; 1c
	.dw $4190	; 1d
	.dw $2080	; 1e
	.dw $6318	; 1f
	.dw $5290	; 20
	.dw $1088	; 21
	.dw $3180	; 22
	.dw $1008	; 23
	.dw $4210	; 24
	.dw $2100	; 25
	.dw $4200	; 26
	.dw $5288	; 27
	.dw $6308	; 28
	.dw $7388	; 29
	.dw $5208	; 2a
	.dw $3100	; 2b
	.dw $4208	; 2c
	.dw $7390	; 2d
	.dw $8	; 2e
	.dw $2098	; 2f
	.dw $2090	; 30
	.dw $1090	; 31
	.dw $3190	; 32
	.dw $2010	; 33
	.dw $1010	; 34
	.dw $5280	; 35
	.dw $3108	; 36
	.dw $2018	; 37
	.dw $1108	; 38
	.dw $6280	; 39
	.dw $6300	; 3a
	.dw $3210	; 3b
	.dw $4180	; 3c
	.dw $4188	; 3d
	.dw $5200	; 3e
	.dw $6288	; 3f
	.dw $7380	; 40
	.dw $6310	; 41
	.dw $1018	; 42
	.dw $10	; 43
images_paletteEnd:

blank_sprite = $d09466
blank_sprite_data:
	.db $8,$8	; width, height
 .dl $2	; Compression Ratio: ( 5, 64 )
	.db $bf,$1
bottomrightcorner_sprite = $d094a8
bottomrightcorner_sprite_data:
	.db $8,$8	; width, height
 .dl $e	; Compression Ratio: ( 22, 64 )
	.db $83,$1,$0,$3,$86,$1,$0,$3,$87,$1,$0,$3,$87,$1,$1,$3,$3,$9f,$1
bottomleftcorner_sprite = $d094ea
bottomleftcorner_sprite_data:
	.db $8,$8	; width, height
 .dl $e	; Compression Ratio: ( 22, 64 )
	.db $82,$1,$0,$3,$86,$1,$0,$3,$85,$1,$0,$3,$84,$1,$1,$3,$3,$a5,$1
barrier_sprite = $d0952c
barrier_sprite_data:
	.db $8,$8	; width, height
 .dl $6	; Compression Ratio: ( 9, 64 )
	.db $a7,$1,$8f,$4,$87,$1
doubebottomleft_sprite = $d0956e
doubebottomleft_sprite_data:
	.db $8,$8	; width, height
 .dl $1c	; Compression Ratio: ( 50, 64 )
	.db $3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$0,$3,$82,$1,$0,$3,$83,$1,$0,$3,$82,$1,$82,$3,$1,$1,$3,$87,$1,$1,$3,$3,$87,$1,$83,$3
doublebottom_sprite = $d095b0
doublebottom_sprite_data:
	.db $8,$8	; width, height
 .dl $8	; Compression Ratio: ( 11, 64 )
	.db $9f,$1,$87,$3,$8f,$1,$87,$3
doublebottomright_sprite = $d095f2
doublebottomright_sprite_data:
	.db $8,$8	; width, height
 .dl $1d	; Compression Ratio: ( 51, 64 )
	.db $83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$82,$1,$0,$3,$82,$1,$83,$3,$82,$1,$0,$3,$86,$1,$0,$3,$84,$1,$3,$3,$3,$1,$1,$83,$3,$83,$1
doubleleft_sprite = $d09634
doubleleft_sprite_data:
	.db $8,$8	; width, height
 .dl $18	; Compression Ratio: ( 59, 64 )
	.db $3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1
doubleright_sprite = $d09676
doubleright_sprite_data:
	.db $8,$8	; width, height
 .dl $18	; Compression Ratio: ( 59, 64 )
	.db $83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3
doublesquarebottomleft_sprite = $d096b8
doublesquarebottomleft_sprite_data:
	.db $8,$8	; width, height
 .dl $f	; Compression Ratio: ( 24, 64 )
	.db $83,$1,$3,$3,$1,$1,$3,$83,$1,$0,$3,$86,$1,$0,$3,$86,$1,$83,$3,$9f,$1
doublesquarebottomright_sprite = $d096fa
doublesquarebottomright_sprite_data:
	.db $8,$8	; width, height
 .dl $d	; Compression Ratio: ( 22, 64 )
	.db $3,$3,$1,$1,$3,$86,$1,$0,$3,$86,$1,$0,$3,$83,$1,$83,$3,$a3,$1
doublesquaretopleft_sprite = $d0973c
doublesquaretopleft_sprite_data:
	.db $8,$8	; width, height
 .dl $d	; Compression Ratio: ( 22, 64 )
	.db $a3,$1,$83,$3,$83,$1,$0,$3,$86,$1,$0,$3,$86,$1,$3,$3,$1,$1,$3
doublesquaretopright_sprite = $d0977e
doublesquaretopright_sprite_data:
	.db $8,$8	; width, height
 .dl $f	; Compression Ratio: ( 24, 64 )
	.db $9f,$1,$83,$3,$86,$1,$0,$3,$86,$1,$0,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1
doubletop_sprite = $d097c0
doubletop_sprite_data:
	.db $8,$8	; width, height
 .dl $8	; Compression Ratio: ( 11, 64 )
	.db $87,$3,$8f,$1,$87,$3,$9f,$1
doubletopleft_sprite = $d09802
doubletopleft_sprite_data:
	.db $8,$8	; width, height
 .dl $1d	; Compression Ratio: ( 51, 64 )
	.db $83,$1,$83,$3,$3,$1,$1,$3,$3,$84,$1,$0,$3,$86,$1,$0,$3,$82,$1,$83,$3,$82,$1,$0,$3,$82,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1
doubletopright_sprite = $d09844
doubletopright_sprite_data:
	.db $8,$8	; width, height
 .dl $1c	; Compression Ratio: ( 50, 64 )
	.db $83,$3,$87,$1,$1,$3,$3,$87,$1,$1,$3,$1,$82,$3,$82,$1,$0,$3,$83,$1,$0,$3,$82,$1,$0,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3
left_sprite = $d09886
left_sprite_data:
	.db $8,$8	; width, height
 .dl $1a	; Compression Ratio: ( 37, 64 )
	.db $82,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$83,$1
right_sprite = $d098c8
right_sprite_data:
	.db $8,$8	; width, height
 .dl $1a	; Compression Ratio: ( 37, 64 )
	.db $83,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$82,$1
top_sprite = $d0990a
top_sprite_data:
	.db $8,$8	; width, height
 .dl $6	; Compression Ratio: ( 9, 64 )
	.db $97,$1,$87,$3,$9f,$1
bottom_sprite = $d0994c
bottom_sprite_data:
	.db $8,$8	; width, height
 .dl $6	; Compression Ratio: ( 9, 64 )
	.db $9f,$1,$87,$3,$97,$1
topleftcorner_sprite = $d0998e
topleftcorner_sprite_data:
	.db $8,$8	; width, height
 .dl $e	; Compression Ratio: ( 22, 64 )
	.db $a5,$1,$1,$3,$3,$84,$1,$0,$3,$85,$1,$0,$3,$86,$1,$0,$3,$82,$1
toprightcorner_sprite = $d099d0
toprightcorner_sprite_data:
	.db $8,$8	; width, height
 .dl $e	; Compression Ratio: ( 22, 64 )
	.db $9f,$1,$1,$3,$3,$87,$1,$0,$3,$87,$1,$0,$3,$86,$1,$0,$3,$83,$1
doubleinleft_sprite = $d09a12
doubleinleft_sprite_data:
	.db $8,$8	; width, height
 .dl $14	; Compression Ratio: ( 27, 64 )
	.db $87,$3,$8f,$1,$82,$3,$87,$1,$0,$3,$87,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$82,$1
doubleinright_sprite = $d09a54
doubleinright_sprite_data:
	.db $8,$8	; width, height
 .dl $14	; Compression Ratio: ( 27, 64 )
	.db $87,$3,$94,$1,$82,$3,$83,$1,$0,$3,$85,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$83,$1
doubleinup_sprite = $d09a96
doubleinup_sprite_data:
	.db $8,$8	; width, height
 .dl $1c	; Compression Ratio: ( 48, 64 )
	.db $3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$0,$3,$82,$1,$0,$3,$82,$1,$0,$3,$83,$1,$83,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1
doubleindown_sprite = $d09ad8
doubleindown_sprite_data:
	.db $8,$8	; width, height
 .dl $1c	; Compression Ratio: ( 48, 64 )
	.db $0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$83,$1,$83,$3,$82,$1,$0,$3,$82,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1
doubleinupright_sprite = $d09b1a
doubleinupright_sprite_data:
	.db $8,$8	; width, height
 .dl $1c	; Compression Ratio: ( 48, 64 )
	.db $83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$82,$1,$0,$3,$82,$1,$83,$3,$83,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3
doubleindownright_sprite = $d09b5c
doubleindownright_sprite_data:
	.db $8,$8	; width, height
 .dl $1c	; Compression Ratio: ( 48, 64 )
	.db $86,$1,$0,$3,$86,$1,$0,$3,$86,$1,$83,$3,$83,$1,$0,$3,$82,$1,$0,$3,$82,$1,$0,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3,$83,$1,$3,$3,$1,$1,$3
bigdotpiece_sprite = $d09b9e
bigdotpiece_sprite_data:
	.db $8,$8	; width, height
 .dl $12	; Compression Ratio: ( 27, 64 )
	.db $1,$1,$1,$83,$c,$82,$1,$85,$c,$0,$1,$9f,$c,$0,$1,$85,$c,$82,$1,$83,$c,$1,$1,$1
dotpiece_sprite = $d09be0
dotpiece_sprite_data:
	.db $8,$8	; width, height
 .dl $8	; Compression Ratio: ( 15, 64 )
	.db $9a,$1,$1,$c,$c,$85,$1,$1,$c,$c,$9a,$1
doublesquareright_sprite = $d09c22
doublesquareright_sprite_data:
	.db $8,$8	; width, height
 .dl $b	; Compression Ratio: ( 15, 64 )
	.db $9f,$1,$88,$3,$86,$1,$0,$3,$86,$1,$87,$3
doublesquareleft_sprite = $d09c64
doublesquareleft_sprite_data:
	.db $8,$8	; width, height
 .dl $b	; Compression Ratio: ( 15, 64 )
	.db $9f,$1,$87,$3,$86,$1,$0,$3,$86,$1,$88,$3
bottomrightcornerinside_sprite = $d09ca6
bottomrightcornerinside_sprite_data:
	.db $8,$8	; width, height
 .dl $12	; Compression Ratio: ( 25, 64 )
	.db $83,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$85,$1,$0,$3,$83,$1,$82,$3,$9c,$1
bottomleftcornerinside_sprite = $d09ce8
bottomleftcornerinside_sprite_data:
	.db $8,$8	; width, height
 .dl $12	; Compression Ratio: ( 25, 64 )
	.db $82,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$87,$1,$0,$3,$87,$1,$82,$3,$97,$1
bottomtopcornerinside_sprite = $d09d2a
bottomtopcornerinside_sprite_data:
	.db $8,$8	; width, height
 .dl $12	; Compression Ratio: ( 25, 64 )
	.db $9c,$1,$82,$3,$83,$1,$0,$3,$85,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$83,$1
bottombottomcornerinside_sprite = $d09d6c
bottombottomcornerinside_sprite_data:
	.db $8,$8	; width, height
 .dl $12	; Compression Ratio: ( 25, 64 )
	.db $97,$1,$82,$3,$87,$1,$0,$3,$87,$1,$0,$3,$86,$1,$0,$3,$86,$1,$0,$3,$82,$1
eyesleft_sprite = $d09dae
eyesleft_sprite_data:
	.db $e,$9	; width, height
 .dl $1b	; Compression Ratio: ( 60, 126 )
	.db $ab,$0,$1,$a,$a,$83,$0,$1,$a,$a,$84,$0,$83,$a,$1,$0,$0,$83,$a,$83,$0,$9,$b,$b,$a,$a,$0,$0,$b,$b,$a,$a,$83,$0,$9,$b,$b,$a,$a,$0,$0,$b,$b,$a,$a,$84,$0,$1,$a,$a,$83,$0,$1,$a,$a,$91,$0
eyesdown_sprite = $d09e2e
eyesdown_sprite_data:
	.db $e,$9	; width, height
 .dl $1f	; Compression Ratio: ( 56, 126 )
	.db $ba,$0,$1,$a,$a,$83,$0,$1,$a,$a,$84,$0,$83,$a,$1,$0,$0,$83,$a,$83,$0,$83,$a,$1,$0,$0,$83,$a,$83,$0,$9,$a,$b,$b,$a,$0,$0,$a,$b,$b,$a,$84,$0,$1,$b,$b,$83,$0,$1,$b,$b,$82,$0
eyesright_sprite = $d09eae
eyesright_sprite_data:
	.db $e,$9	; width, height
 .dl $1b	; Compression Ratio: ( 60, 126 )
	.db $ad,$0,$1,$a,$a,$83,$0,$1,$a,$a,$84,$0,$83,$a,$1,$0,$0,$83,$a,$83,$0,$9,$a,$a,$b,$b,$0,$0,$a,$a,$b,$b,$83,$0,$9,$a,$a,$b,$b,$0,$0,$a,$a,$b,$b,$84,$0,$1,$a,$a,$83,$0,$1,$a,$a,$8f,$0
eyesup_sprite = $d09f2e
eyesup_sprite_data:
	.db $e,$9	; width, height
 .dl $1f	; Compression Ratio: ( 56, 126 )
	.db $90,$0,$1,$b,$b,$83,$0,$1,$b,$b,$84,$0,$9,$a,$b,$b,$a,$0,$0,$a,$b,$b,$a,$83,$0,$83,$a,$1,$0,$0,$83,$a,$83,$0,$83,$a,$1,$0,$0,$83,$a,$84,$0,$1,$a,$a,$83,$0,$1,$a,$a,$ac,$0
gameover_sprite = $d09fae
gameover_sprite_data:
	.db $4f,$7	; width, height
 .dl $b7	; Compression Ratio: ( 352, 553 )
	.db $1,$1,$1,$84,$8,$82,$1,$82,$8,$82,$1,$1,$8,$8,$82,$1,$3,$8,$8,$1,$1,$85,$8,$91,$1,$84,$8,$3,$1,$1,$8,$8,$82,$1,$3,$8,$8,$1,$1,$85,$8,$0,$1,$85,$8,$3,$1,$1,$8,$8,$85,$1,$6,$8,$8,$1,$8,$8,$1,$1,$82,$8,$0,$1,$82,$8,$3,$1,$1,$8,$8,$94,$1,$1,$8,$8,$82,$1,$4,$8,$8,$1,$8,$8,$82,$1,$5,$8,$8,$1,$1,$8,$8,$84,$1,$1,$8,$8,$82,$1,$83,$8,$85,$1,$1,$8,$8,$82,$1,$2,$8,$8,$1,$86,$8,$3,$1,$1,$8,$8,$94,$1,$1,$8,$8,$82,$1,$4,$8,$8,$1,$8,$8,$82,$1,$5,$8,$8,$1,$1,$8,$8,$84,$1,$1,$8,$8,$82,$1,$83,$8,$1,$1,$1,$82,$8,$2,$1,$8,$8,$82,$1,$2,$8,$8,$1,$86,$8,$1,$1,$1,$84,$8,$91,$1,$1,$8,$8,$82,$1,$2,$8,$8,$1,$82,$8,$0,$1,$82,$8,$1,$1,$1,$84,$8,$5,$1,$1,$8,$8,$1,$1,$84,$8,$82,$1,$2,$8,$8,$1,$86,$8,$b,$1,$8,$8,$1,$8,$1,$8,$8,$1,$1,$8,$8,$94,$1,$1,$8,$8,$82,$1,$3,$8,$8,$1,$1,$84,$8,$82,$1,$1,$8,$8,$84,$1,$84,$8,$82,$1,$8,$8,$8,$1,$1,$8,$8,$1,$8,$8,$82,$1,$4,$8,$8,$1,$8,$8,$82,$1,$5,$8,$8,$1,$1,$8,$8,$94,$1,$1,$8,$8,$82,$1,$1,$8,$8,$82,$1,$82,$8,$83,$1,$1,$8,$8,$84,$1,$2,$8,$8,$1,$82,$8,$82,$1,$84,$8,$2,$1,$8,$8,$82,$1,$4,$8,$8,$1,$8,$8,$82,$1,$3,$8,$8,$1,$1,$85,$8,$91,$1,$84,$8,$84,$1,$0,$8,$84,$1,$85,$8,$4,$1,$8,$8,$1,$1,$82,$8
ghostred_sprite = $d0a1d9
ghostred_sprite_data:
	.db $e,$e	; width, height
 .dl $28	; Compression Ratio: ( 59, 196 )
	.db $84,$0,$83,$8,$87,$0,$87,$8,$84,$0,$89,$8,$82,$0,$8b,$8,$1,$0,$0,$8b,$8,$1,$0,$0,$8b,$8,$0,$0,$d5,$8,$0,$0,$82,$8,$1,$0,$0,$82,$8,$0,$0,$82,$8,$82,$0,$5,$8,$8,$0,$0,$8,$8,$82,$0,$0,$8
ghostblue_sprite = $d0a29f
ghostblue_sprite_data:
	.db $e,$e	; width, height
 .dl $28	; Compression Ratio: ( 59, 196 )
	.db $84,$0,$83,$7,$87,$0,$87,$7,$84,$0,$89,$7,$82,$0,$8b,$7,$1,$0,$0,$8b,$7,$1,$0,$0,$8b,$7,$0,$0,$d5,$7,$0,$0,$82,$7,$1,$0,$0,$82,$7,$0,$0,$82,$7,$82,$0,$5,$7,$7,$0,$0,$7,$7,$82,$0,$0,$7
ghostpink_sprite = $d0a365
ghostpink_sprite_data:
	.db $e,$e	; width, height
 .dl $28	; Compression Ratio: ( 59, 196 )
	.db $84,$0,$83,$9,$87,$0,$87,$9,$84,$0,$89,$9,$82,$0,$8b,$9,$1,$0,$0,$8b,$9,$1,$0,$0,$8b,$9,$0,$0,$d5,$9,$0,$0,$82,$9,$1,$0,$0,$82,$9,$0,$0,$82,$9,$82,$0,$5,$9,$9,$0,$0,$9,$9,$82,$0,$0,$9
ghostorange_sprite = $d0a42b
ghostorange_sprite_data:
	.db $e,$e	; width, height
 .dl $28	; Compression Ratio: ( 59, 196 )
	.db $84,$0,$83,$6,$87,$0,$87,$6,$84,$0,$89,$6,$82,$0,$8b,$6,$1,$0,$0,$8b,$6,$1,$0,$0,$8b,$6,$0,$0,$d5,$6,$0,$0,$82,$6,$1,$0,$0,$82,$6,$0,$0,$82,$6,$82,$0,$5,$6,$6,$0,$0,$6,$6,$82,$0,$0,$6
ghostscared_sprite = $d0a4f1
ghostscared_sprite_data:
	.db $e,$e	; width, height
 .dl $34	; Compression Ratio: ( 105, 196 )
	.db $84,$0,$83,$e,$87,$0,$87,$e,$84,$0,$89,$e,$82,$0,$8b,$e,$1,$0,$0,$8b,$e,$1,$0,$0,$82,$e,$5,$f,$f,$e,$e,$f,$f,$82,$e,$0,$0,$83,$e,$5,$f,$f,$e,$e,$f,$f,$a1,$e,$9,$f,$f,$e,$e,$f,$f,$e,$e,$f,$f,$82,$e,$b,$f,$e,$e,$f,$f,$e,$e,$f,$f,$e,$e,$f,$90,$e,$0,$0,$82,$e,$1,$0,$0,$82,$e,$0,$0,$82,$e,$82,$0,$5,$e,$e,$0,$0,$e,$e,$82,$0,$0,$e
ghostwhite_sprite = $d0a5b7
ghostwhite_sprite_data:
	.db $e,$e	; width, height
 .dl $34	; Compression Ratio: ( 105, 196 )
	.db $84,$0,$83,$2,$87,$0,$87,$2,$84,$0,$89,$2,$82,$0,$8b,$2,$1,$0,$0,$8b,$2,$1,$0,$0,$82,$2,$5,$8,$8,$2,$2,$8,$8,$82,$2,$0,$0,$83,$2,$5,$8,$8,$2,$2,$8,$8,$a1,$2,$9,$8,$8,$2,$2,$8,$8,$2,$2,$8,$8,$82,$2,$b,$8,$2,$2,$8,$8,$2,$2,$8,$8,$2,$2,$8,$90,$2,$0,$0,$82,$2,$1,$0,$0,$82,$2,$0,$0,$82,$2,$82,$0,$5,$2,$2,$0,$0,$2,$2,$82,$0,$0,$2
pacmanlogo_sprite = $d0a67d
pacmanlogo_sprite_data:
	.db $a8,$1b	; width, height
 .dl $388	; Compression Ratio: ( 2595, 4536 )
	.db $0,$17,$8c,$18,$0,$19,$8e,$1,$0,$1a,$95,$1,$4,$1c,$1d,$17,$1,$1,$82,$1e,$b2,$1,$1,$1e,$1f,$8d,$1,$0,$20,$97,$1,$0,$21,$88,$18,$0,$1a,$83,$1,$2,$19,$20,$21,$8c,$17,$8c,$1,$6,$17,$18,$1e,$22,$1,$1,$23,$8d,$1,$7,$21,$19,$24,$17,$25,$26,$27,$28,$82,$29,$2,$28,$2a,$2b,$99,$1,$6,$17,$18,$1,$1e,$1,$23,$23,$8d,$1,$2,$1e,$2,$24,$8c,$1,$6,$1d,$a,$1e,$1c,$1,$1,$23,$88,$1,$1,$24,$18,$87,$1,$3,$21,$18,$17,$1,$87,$1e,$82,$1,$2,$19,$20,$1e,$8b,$28,$2,$27,$2c,$25,$8a,$1,$7,$1f,$1c,$2b,$2d,$1e,$2e,$2f,$23,$8b,$1,$5,$19,$a,$17,$1e,$27,$29,$87,$5,$2,$29,$28,$2b,$97,$1,$7,$17,$2,$1e,$28,$1e,$2e,$2f,$23,$8b,$1,$7,$1e,$2,$19,$1,$28,$1e,$2e,$23,$88,$1,$7,$18,$1e,$2c,$2d,$1,$23,$30,$23,$87,$1,$6,$24,$18,$1c,$22,$1,$31,$23,$82,$1,$3,$21,$18,$1e,$2c,$87,$29,$6,$27,$1,$1,$19,$20,$25,$29,$8b,$5,$82,$29,$0,$2b,$87,$1,$8,$32,$a,$1,$29,$29,$28,$1,$2f,$33,$8a,$1,$5,$1f,$a,$1,$22,$29,$29,$8a,$5,$1,$29,$28,$96,$1,$8,$17,$18,$1e,$28,$2d,$1e,$2e,$2f,$23,$89,$1,$8,$1e,$2,$24,$1,$29,$29,$1e,$30,$34,$87,$1,$8,$1a,$1f,$1,$29,$29,$27,$1,$2f,$33,$87,$1,$e,$24,$18,$22,$2d,$22,$2e,$2f,$23,$1,$1,$21,$18,$1e,$35,$29,$85,$5,$7,$29,$27,$1,$1e,$19,$20,$25,$29,$8e,$5,$1,$29,$26,$86,$1,$9,$a,$17,$22,$29,$5,$29,$2b,$2e,$2f,$23,$88,$1,$4,$1f,$a,$1,$27,$29,$8d,$5,$2,$29,$6,$1e,$94,$1,$9,$17,$18,$1e,$28,$29,$29,$1e,$23,$2f,$23,$87,$1,$9,$1e,$18,$24,$1,$28,$29,$29,$1e,$31,$34,$86,$1,$9,$1e,$18,$21,$27,$29,$5,$29,$1e,$34,$2f,$87,$1,$e,$24,$18,$22,$29,$29,$2b,$2e,$30,$23,$1,$21,$18,$1e,$35,$29,$86,$5,$6,$27,$1,$31,$19,$20,$25,$29,$8f,$5,$1,$29,$2b,$84,$1,$3,$36,$a,$1,$29,$82,$5,$3,$28,$1,$37,$33,$87,$1,$4,$24,$18,$1,$26,$29,$8f,$5,$2,$29,$28,$1e,$93,$1,$a,$17,$18,$1e,$28,$29,$5,$29,$1,$23,$2f,$23,$85,$1,$a,$1e,$18,$19,$1,$28,$29,$5,$29,$1e,$31,$34,$86,$1,$a,$24,$1f,$1,$29,$5,$5,$29,$27,$2e,$2f,$34,$86,$1,$e,$24,$18,$22,$5,$5,$29,$1e,$23,$30,$2e,$21,$18,$38,$35,$29,$86,$5,$6,$27,$2e,$2f,$19,$20,$25,$29,$90,$5,$1,$29,$1e,$83,$1,$3,$2,$17,$2c,$29,$82,$5,$4,$29,$26,$2e,$2f,$23,$85,$1,$4,$1e,$2,$17,$25,$29,$91,$5,$1,$29,$26,$93,$1,$b,$17,$18,$1e,$28,$29,$5,$5,$29,$1e,$23,$2f,$23,$84,$1,$a,$2,$24,$1,$29,$29,$5,$5,$29,$1e,$31,$34,$86,$1,$2,$2,$1,$27,$83,$5,$4,$29,$25,$23,$2f,$23,$85,$1,$2,$24,$18,$22,$82,$5,$8,$29,$1e,$23,$2f,$2e,$24,$25,$35,$29,$86,$5,$6,$27,$2e,$2f,$19,$20,$25,$29,$86,$5,$3,$29,$29,$28,$29,$85,$5,$1,$29,$22,$82,$1,$3,$24,$1f,$1,$29,$84,$5,$3,$29,$1,$34,$33,$85,$1,$3,$1f,$1f,$1,$29,$90,$5,$2,$29,$27,$25,$94,$1,$4,$17,$18,$1e,$28,$29,$82,$5,$c,$29,$1e,$23,$2f,$23,$1,$1,$1e,$18,$24,$1,$28,$29,$82,$5,$3,$29,$1e,$31,$34,$85,$1,$3,$19,$20,$1e,$29,$84,$5,$3,$28,$1,$37,$33,$85,$1,$2,$24,$18,$22,$83,$5,$7,$29,$1e,$23,$30,$2e,$1,$39,$29,$85,$5,$7,$29,$27,$2e,$2f,$19,$20,$25,$29,$86,$5,$4,$29,$1e,$1,$22,$29,$85,$5,$0,$2c,$82,$1,$3,$1f,$21,$26,$29,$84,$5,$4,$29,$2c,$2e,$2f,$34,$84,$1,$3,$2,$17,$1c,$29,$8e,$5,$4,$29,$29,$25,$1,$23,$83,$1,$0,$32,$88,$19,$0,$17,$85,$1,$4,$17,$18,$1e,$28,$29,$82,$5,$b,$29,$29,$1,$23,$2f,$23,$1,$a,$19,$1,$28,$29,$83,$5,$3,$29,$1e,$31,$34,$84,$1,$4,$1b,$2,$1,$27,$29,$84,$5,$3,$29,$25,$23,$2f,$85,$1,$2,$24,$18,$22,$84,$5,$6,$6,$1,$34,$30,$1,$3a,$29,$85,$5,$7,$29,$27,$2e,$2f,$19,$20,$25,$29,$86,$5,$0,$35,$82,$1,$0,$29,$82,$5,$9,$29,$28,$29,$27,$1,$1,$19,$19,$1e,$29,$86,$5,$4,$29,$1e,$34,$2f,$23,$82,$1,$4,$32,$2,$1,$28,$29,$8c,$5,$6,$29,$29,$25,$1,$1,$2f,$31,$83,$1,$1,$a,$2,$87,$a,$0,$32,$85,$1,$4,$17,$18,$1e,$28,$29,$84,$5,$8,$29,$1e,$23,$2f,$34,$1,$1,$29,$29,$84,$5,$3,$29,$1e,$31,$34,$84,$1,$3,$1f,$3b,$25,$29,$86,$5,$3,$29,$1,$34,$37,$84,$1,$2,$24,$18,$22,$84,$5,$6,$29,$29,$1,$23,$2e,$39,$29,$85,$5,$7,$29,$27,$2e,$2f,$19,$20,$25,$29,$86,$5,$4,$29,$1e,$1,$25,$29,$82,$5,$9,$29,$1,$29,$2a,$2e,$1,$1f,$21,$35,$29,$87,$5,$3,$27,$1,$2f,$34,$82,$1,$3,$19,$1f,$1e,$29,$8b,$5,$6,$29,$29,$3c,$1,$23,$30,$30,$85,$1,$2,$1f,$32,$1,$89,$1e,$83,$1,$4,$17,$18,$1e,$28,$29,$85,$5,$6,$29,$1e,$23,$23,$1,$28,$29,$85,$5,$3,$29,$1e,$31,$34,$83,$1,$3,$17,$a,$1,$28,$87,$5,$4,$29,$3c,$2e,$2f,$23,$83,$1,$2,$24,$18,$22,$85,$5,$5,$29,$28,$1,$1,$3a,$29,$85,$5,$7,$29,$27,$2e,$2f,$19,$20,$25,$29,$87,$5,$2,$29,$28,$29,$83,$5,$8,$28,$1,$29,$3d,$23,$23,$17,$1e,$29,$88,$5,$a,$29,$25,$34,$2f,$2e,$1,$1,$19,$24,$25,$29,$89,$5,$6,$29,$29,$26,$1,$2e,$30,$2f,$87,$1,$2,$a,$32,$2c,$88,$29,$0,$3e,$83,$1,$4,$17,$18,$1e,$28,$29,$85,$5,$5,$29,$29,$1,$1,$28,$29,$86,$5,$3,$29,$1e,$31,$34,$83,$1,$3,$1f,$24,$25,$29,$87,$5,$5,$29,$29,$1,$34,$37,$23,$82,$1,$2,$24,$18,$22,$86,$5,$4,$29,$27,$1,$35,$29,$85,$5,$7,$29,$27,$2e,$2f,$19,$20,$25,$29,$8d,$5,$9,$29,$25,$22,$2d,$1e,$34,$2e,$1,$28,$29,$83,$5,$0,$29,$84,$5,$9,$28,$1,$2f,$37,$1,$1,$1f,$1c,$22,$29,$88,$5,$6,$29,$2c,$1,$2e,$37,$30,$23,$88,$1,$2,$19,$17,$26,$87,$5,$1,$29,$26,$83,$1,$4,$17,$18,$1e,$28,$29,$87,$5,$2,$29,$3a,$29,$87,$5,$3,$29,$1e,$31,$34,$82,$1,$3,$36,$18,$1,$29,$89,$5,$4,$29,$26,$2e,$2f,$34,$82,$1,$2,$24,$18,$22,$87,$5,$2,$29,$35,$35,$86,$5,$7,$29,$27,$2e,$2f,$19,$20,$25,$29,$8a,$5,$82,$29,$8,$22,$1e,$2d,$27,$2e,$2f,$1,$22,$29,$82,$5,$4,$29,$26,$25,$35,$29,$82,$5,$9,$29,$22,$2e,$2f,$23,$1,$1f,$1c,$26,$29,$88,$5,$6,$35,$1,$1,$21,$34,$31,$17,$8a,$1,$0,$35,$87,$5,$a,$29,$26,$2e,$21,$1,$1,$17,$18,$1e,$28,$29,$92,$5,$3,$29,$1e,$31,$34,$82,$1,$3,$a,$1c,$22,$29,$82,$5,$3,$29,$3c,$25,$28,$83,$5,$9,$29,$1e,$34,$2f,$23,$1,$1,$24,$18,$22,$91,$5,$7,$29,$27,$2e,$2f,$19,$20,$25,$29,$84,$5,$85,$29,$a,$3a,$3c,$1,$1e,$29,$29,$1,$34,$33,$1,$28,$83,$5,$0,$28,$82,$1,$0,$29,$83,$5,$8,$29,$1,$33,$30,$2e,$1f,$1c,$22,$29,$88,$5,$8,$29,$29,$2c,$1,$1,$1c,$2,$a,$17,$88,$1,$88,$29,$a,$2d,$27,$2e,$31,$1,$1,$17,$18,$1e,$28,$29,$92,$5,$9,$29,$1e,$31,$34,$1,$1,$1c,$18,$1,$29,$83,$5,$4,$35,$1,$1,$1e,$29,$82,$5,$9,$29,$27,$2e,$2f,$33,$1,$1,$24,$18,$22,$91,$5,$7,$29,$27,$2e,$2f,$19,$20,$25,$29,$83,$5,$1,$29,$2a,$84,$1,$a,$1e,$22,$28,$2d,$28,$1,$34,$2f,$2e,$22,$29,$83,$5,$0,$28,$82,$1,$0,$29,$83,$5,$8,$29,$2c,$2e,$2f,$34,$32,$19,$25,$29,$89,$5,$9,$29,$29,$2d,$27,$1e,$1,$24,$2,$18,$17,$87,$1,$88,$1e,$9,$23,$34,$31,$1,$1,$17,$18,$1e,$28,$29,$92,$5,$9,$29,$1e,$31,$34,$1,$1,$a,$17,$26,$29,$83,$5,$4,$35,$1,$1,$1e,$29,$83,$5,$8,$29,$25,$34,$2f,$23,$1,$24,$18,$22,$91,$5,$7,$29,$27,$2e,$2f,$19,$20,$25,$29,$83,$5,$3,$29,$2a,$25,$29,$84,$2d,$7,$28,$22,$1,$34,$2f,$34,$1,$29,$84,$5,$4,$29,$35,$22,$3f,$29,$84,$5,$7,$29,$1e,$34,$2f,$2e,$19,$1e,$29,$89,$5,$a,$26,$1e,$22,$29,$2d,$28,$25,$1,$1c,$a,$1c,$88,$1,$0,$21,$87,$34,$7,$31,$1,$1,$17,$18,$1e,$28,$29,$92,$5,$8,$29,$1e,$31,$34,$1,$1d,$1f,$1,$29,$84,$5,$3,$29,$3e,$22,$28,$84,$5,$8,$29,$3f,$1,$2f,$34,$2e,$24,$18,$22,$92,$5,$6,$27,$2e,$2f,$19,$20,$25,$29,$83,$5,$4,$29,$2a,$25,$29,$22,$82,$25,$8,$1e,$1,$2e,$37,$2f,$37,$2e,$22,$29,$8e,$5,$8,$29,$2c,$2e,$2f,$34,$1b,$1e,$28,$29,$88,$5,$8,$29,$28,$22,$1,$25,$28,$2d,$2d,$1c,$8a,$1,$0,$23,$87,$34,$7,$23,$1,$1,$17,$18,$1e,$28,$29,$91,$5,$9,$29,$29,$1e,$31,$34,$1,$18,$17,$26,$29,$8e,$5,$7,$29,$25,$23,$2f,$2e,$24,$18,$22,$91,$5,$7,$29,$27,$2e,$2f,$19,$20,$25,$29,$83,$5,$f,$29,$2a,$25,$29,$1,$23,$34,$34,$37,$37,$2f,$33,$23,$1,$1e,$29,$8e,$5,$9,$22,$22,$2d,$25,$34,$37,$2e,$1,$1c,$29,$8a,$5,$9,$29,$29,$26,$1,$1e,$27,$2d,$29,$35,$25,$93,$1,$4,$17,$18,$1e,$28,$29,$90,$5,$9,$26,$25,$29,$1e,$31,$34,$24,$1f,$1,$29,$8d,$5,$9,$29,$25,$2c,$2d,$1,$37,$34,$2e,$18,$22,$8f,$5,$9,$29,$25,$28,$28,$2e,$2f,$19,$20,$25,$29,$83,$5,$7,$29,$2a,$25,$29,$1,$34,$37,$34,$82,$23,$4,$2e,$1d,$1,$26,$29,$8e,$5,$9,$28,$1,$29,$28,$1,$37,$34,$1,$1,$6,$8c,$5,$7,$29,$29,$2a,$25,$1e,$35,$29,$2d,$93,$1,$4,$17,$18,$1e,$28,$29,$8f,$5,$a,$29,$26,$25,$29,$1e,$31,$34,$1d,$1e,$2a,$29,$8d,$5,$9,$29,$35,$1e,$2d,$22,$2e,$2f,$34,$1,$26,$8f,$5,$9,$29,$25,$28,$28,$2e,$2f,$19,$20,$25,$29,$83,$5,$6,$29,$2c,$25,$29,$1,$34,$34,$83,$1,$3,$1c,$a,$1,$29,$90,$5,$9,$22,$1c,$2d,$25,$23,$2f,$2e,$1,$25,$29,$8d,$5,$5,$29,$28,$1,$27,$29,$27,$93,$1,$4,$17,$18,$1e,$28,$29,$8f,$5,$9,$29,$26,$25,$29,$1e,$31,$34,$2e,$1e,$29,$8f,$5,$8,$29,$1e,$27,$29,$1,$34,$37,$1,$3c,$8f,$5,$9,$29,$25,$28,$28,$2e,$2f,$19,$20,$25,$29,$83,$5,$6,$29,$27,$25,$29,$1,$34,$33,$83,$1,$3,$18,$21,$3e,$29,$91,$5,$9,$1,$28,$29,$1,$37,$37,$23,$1,$22,$29,$8b,$5,$7,$29,$2c,$1,$35,$2d,$27,$1,$30,$92,$1,$4,$17,$2,$1e,$28,$29,$8f,$5,$9,$29,$26,$25,$29,$1e,$31,$34,$1,$28,$29,$8d,$5,$82,$29,$7,$27,$1e,$2d,$2c,$2e,$2f,$2e,$3c,$8c,$5,$d,$29,$5,$29,$29,$25,$28,$28,$2e,$2f,$1c,$17,$25,$29,$40,$83,$22,$5,$1e,$25,$29,$1,$34,$33,$83,$1,$2,$20,$1e,$29,$8d,$5,$0,$35,$83,$25,$a,$1,$25,$29,$22,$2e,$2f,$34,$21,$1e,$3c,$29,$85,$5,$82,$29,$9,$3f,$26,$1e,$25,$28,$2d,$27,$1,$34,$33,$93,$1,$3,$24,$1e,$28,$29,$8b,$5,$0,$3e,$82,$25,$8,$22,$1,$25,$29,$1e,$31,$23,$25,$29,$8d,$5,$0,$26,$83,$25,$6,$1,$27,$29,$1e,$34,$23,$3c,$8a,$5,$1,$40,$22,$83,$25,$9,$1,$28,$28,$2e,$2f,$1,$1,$22,$29,$29,$83,$3d,$5,$2c,$27,$2d,$1,$34,$33,$84,$1,$1,$27,$29,$8c,$5,$1,$29,$28,$83,$2c,$6,$27,$27,$29,$29,$1,$34,$37,$82,$1,$2,$25,$29,$29,$83,$5,$0,$3a,$82,$1,$7,$25,$27,$29,$29,$26,$1,$34,$23,$95,$1,$2,$1e,$28,$29,$8a,$5,$1,$29,$28,$84,$2c,$6,$28,$29,$1e,$31,$1,$28,$29,$8c,$5,$1,$29,$28,$84,$27,$6,$28,$29,$2a,$1,$23,$3d,$29,$89,$5,$1,$29,$27,$83,$2c,$a,$27,$29,$3f,$2e,$2f,$1,$1,$25,$2d,$29,$29,$83,$2d,$4,$29,$2d,$1,$34,$33,$83,$1,$2,$1e,$28,$29,$8d,$28,$86,$29,$6,$28,$2d,$2c,$2e,$2f,$34,$2e,$82,$1,$2,$2c,$29,$29,$82,$5,$0,$40,$83,$29,$4,$2c,$1,$2e,$2f,$30,$97,$1,$1,$28,$29,$8b,$28,$86,$29,$5,$28,$1e,$1,$17,$41,$6,$8d,$28,$86,$29,$6,$6,$2d,$1e,$1,$1c,$29,$6,$89,$28,$86,$29,$2,$2c,$2e,$2f,$84,$1,$86,$23,$2,$2e,$42,$33,$87,$1,$96,$23,$3,$43,$42,$2f,$23,$84,$1,$c,$22,$2c,$27,$28,$28,$27,$2c,$22,$1e,$2e,$34,$30,$34,$9b,$1,$93,$23,$0,$2e,$83,$1,$96,$23,$4,$2e,$23,$23,$1,$1,$90,$23,$1,$34,$37,$83,$1,$0,$23,$89,$33,$86,$1,$0,$31,$96,$33,$2,$2f,$37,$37,$8b,$1,$5,$23,$34,$34,$2f,$33,$23,$9c,$1,$94,$33,$2,$23,$1,$1,$99,$33,$2,$30,$2e,$23,$90,$33,$1,$37,$33
ready_sprite = $d0b837
ready_sprite_data:
	.db $2e,$7	; width, height
 .dl $80	; Compression Ratio: ( 250, 322 )
	.db $85,$5,$82,$1,$85,$5,$82,$1,$82,$5,$82,$1,$84,$5,$83,$1,$5,$5,$5,$1,$1,$5,$5,$83,$1,$84,$5,$82,$1,$5,$5,$5,$1,$1,$5,$5,$85,$1,$c,$5,$5,$1,$5,$5,$1,$1,$5,$5,$1,$1,$5,$5,$82,$1,$5,$5,$5,$1,$1,$5,$5,$83,$1,$84,$5,$82,$1,$5,$5,$5,$1,$1,$5,$5,$84,$1,$1,$5,$5,$82,$1,$4,$5,$5,$1,$5,$5,$82,$1,$9,$5,$5,$1,$1,$5,$5,$1,$1,$5,$5,$82,$1,$82,$5,$4,$1,$5,$5,$1,$1,$82,$5,$1,$1,$1,$84,$5,$3,$1,$1,$5,$5,$82,$1,$4,$5,$5,$1,$5,$5,$82,$1,$1,$5,$5,$82,$1,$83,$5,$83,$1,$3,$5,$5,$1,$1,$84,$5,$83,$1,$1,$5,$5,$84,$1,$86,$5,$2,$1,$5,$5,$82,$1,$1,$5,$5,$83,$1,$1,$5,$5,$84,$1,$0,$5,$82,$1,$2,$5,$5,$1,$82,$5,$82,$1,$1,$5,$5,$84,$1,$1,$5,$5,$82,$1,$8,$5,$5,$1,$5,$5,$1,$1,$5,$5,$84,$1,$1,$5,$5,$88,$1,$3,$5,$5,$1,$1,$82,$5,$1,$1,$1,$85,$5,$2,$1,$5,$5,$82,$1,$2,$5,$5,$1,$84,$5,$85,$1,$1,$5,$5,$83,$1,$0,$5,$83,$1
pacmandown1_sprite = $d0b97b
pacmandown1_sprite_data:
	.db $d,$c	; width, height
 .dl $37	; Compression Ratio: ( 73, 156 )
	.db $83,$0,$84,$5,$85,$0,$88,$5,$82,$0,$8a,$5,$1,$0,$0,$8a,$5,$0,$0,$85,$5,$0,$0,$8b,$5,$0,$0,$8b,$5,$0,$0,$8a,$5,$82,$0,$89,$5,$82,$0,$84,$5,$0,$0,$83,$5,$82,$0,$83,$5,$1,$0,$0,$82,$5,$84,$0,$82,$5,$82,$0,$1,$5,$5,$84,$0,$3,$5,$5,$0,$0
pacmandown2_sprite = $d0ba19
pacmandown2_sprite_data:
	.db $d,$9	; width, height
 .dl $24	; Compression Ratio: ( 45, 117 )
	.db $83,$0,$84,$5,$85,$0,$88,$5,$82,$0,$8a,$5,$1,$0,$0,$8a,$5,$0,$0,$85,$5,$0,$0,$8a,$5,$82,$0,$88,$5,$84,$0,$86,$5,$86,$0,$84,$5,$88,$0,$1,$5,$5
pacmanup1_sprite = $d0ba90
pacmanup1_sprite_data:
	.db $d,$c	; width, height
 .dl $37	; Compression Ratio: ( 73, 156 )
	.db $3,$0,$0,$5,$5,$84,$0,$1,$5,$5,$82,$0,$82,$5,$84,$0,$82,$5,$1,$0,$0,$83,$5,$82,$0,$83,$5,$0,$0,$84,$5,$82,$0,$89,$5,$82,$0,$8a,$5,$0,$0,$8b,$5,$0,$0,$8b,$5,$0,$0,$85,$5,$0,$0,$8a,$5,$1,$0,$0,$8a,$5,$82,$0,$88,$5,$85,$0,$84,$5,$83,$0
pacmanup2_sprite = $d0bb2e
pacmanup2_sprite_data:
	.db $d,$c	; width, height
 .dl $26	; Compression Ratio: ( 47, 156 )
	.db $a6,$0,$1,$5,$5,$88,$0,$84,$5,$86,$0,$86,$5,$84,$0,$88,$5,$82,$0,$8a,$5,$0,$0,$85,$5,$0,$0,$8a,$5,$1,$0,$0,$8a,$5,$82,$0,$88,$5,$85,$0,$84,$5,$83,$0
pacmanleft1_sprite = $d0bbcc
pacmanleft1_sprite_data:
	.db $c,$d	; width, height
 .dl $2d	; Compression Ratio: ( 56, 156 )
	.db $82,$0,$84,$5,$84,$0,$88,$5,$1,$0,$0,$8a,$5,$0,$0,$8a,$5,$82,$0,$89,$5,$84,$0,$86,$5,$87,$0,$83,$5,$84,$0,$86,$5,$1,$0,$0,$94,$5,$0,$0,$8a,$5,$1,$0,$0,$88,$5,$84,$0,$84,$5,$83,$0
pacmanleft2_sprite = $d0bc6a
pacmanleft2_sprite_data:
	.db $c,$d	; width, height
 .dl $36	; Compression Ratio: ( 57, 156 )
	.db $82,$0,$84,$5,$86,$0,$86,$5,$85,$0,$86,$5,$85,$0,$85,$5,$86,$0,$85,$5,$86,$0,$84,$5,$87,$0,$83,$5,$86,$0,$84,$5,$85,$0,$85,$5,$84,$0,$85,$5,$84,$0,$86,$5,$83,$0,$86,$5,$84,$0,$84,$5,$83,$0
pacmanright1_sprite = $d0bd08
pacmanright1_sprite_data:
	.db $c,$d	; width, height
 .dl $2d	; Compression Ratio: ( 56, 156 )
	.db $83,$0,$84,$5,$84,$0,$88,$5,$1,$0,$0,$8a,$5,$0,$0,$94,$5,$1,$0,$0,$86,$5,$84,$0,$83,$5,$87,$0,$86,$5,$84,$0,$89,$5,$82,$0,$8a,$5,$0,$0,$8a,$5,$1,$0,$0,$88,$5,$84,$0,$84,$5,$82,$0
pacmanright2_sprite = $d0bda6
pacmanright2_sprite_data:
	.db $c,$d	; width, height
 .dl $36	; Compression Ratio: ( 57, 156 )
	.db $83,$0,$84,$5,$84,$0,$86,$5,$83,$0,$86,$5,$84,$0,$85,$5,$84,$0,$85,$5,$85,$0,$84,$5,$86,$0,$83,$5,$87,$0,$84,$5,$86,$0,$85,$5,$86,$0,$85,$5,$85,$0,$86,$5,$85,$0,$86,$5,$86,$0,$84,$5,$82,$0
pacmansolid_sprite = $d0be44
pacmansolid_sprite_data:
	.db $d,$c	; width, height
 .dl $22	; Compression Ratio: ( 43, 156 )
	.db $83,$0,$84,$5,$85,$0,$88,$5,$82,$0,$8a,$5,$1,$0,$0,$8a,$5,$0,$0,$b3,$5,$0,$0,$8a,$5,$1,$0,$0,$8a,$5,$82,$0,$88,$5,$85,$0,$84,$5,$83,$0
cherry_sprite = $d0bee2
cherry_sprite_data:
	.db $d,$e	; width, height
 .dl $3c	; Compression Ratio: ( 104, 182 )
	.db $97,$0,$1,$10,$10,$88,$0,$83,$10,$86,$0,$3,$10,$10,$0,$10,$87,$0,$0,$10,$82,$0,$0,$10,$83,$0,$82,$8,$0,$10,$82,$0,$0,$10,$83,$0,$82,$8,$4,$10,$8,$8,$0,$10,$84,$0,$84,$8,$4,$0,$8,$10,$8,$8,$82,$0,$7,$8,$11,$8,$8,$0,$8,$8,$10,$82,$8,$6,$0,$0,$8,$8,$11,$8,$0,$85,$8,$82,$0,$82,$8,$2,$0,$8,$11,$83,$8,$86,$0,$2,$8,$8,$11,$82,$8,$87,$0,$83,$8,$8e,$0
strawberry_sprite = $d0bf9a
strawberry_sprite_data:
	.db $d,$e	; width, height
 .dl $3c	; Compression Ratio: ( 99, 182 )
	.db $92,$0,$0,$2,$88,$0,$82,$12,$0,$2,$82,$12,$84,$0,$1,$8,$8,$84,$12,$1,$8,$8,$82,$0,$84,$8,$0,$12,$82,$8,$5,$2,$8,$0,$0,$8,$2,$84,$8,$0,$2,$82,$8,$1,$0,$0,$82,$8,$2,$2,$8,$2,$84,$8,$1,$0,$0,$87,$8,$2,$2,$8,$8,$82,$0,$4,$8,$2,$8,$8,$2,$83,$8,$83,$0,$88,$8,$84,$0,$5,$8,$8,$2,$8,$8,$2,$87,$0,$84,$8,$89,$0,$0,$8,$92,$0
orange_sprite = $d0c052
orange_sprite_data:
	.db $d,$e	; width, height
 .dl $36	; Compression Ratio: ( 70, 182 )
	.db $93,$0,$1,$12,$12,$88,$0,$0,$44,$84,$12,$86,$0,$1,$44,$0,$82,$12,$85,$0,$0,$15,$82,$44,$82,$15,$84,$0,$82,$15,$0,$44,$84,$15,$82,$0,$8a,$15,$1,$0,$0,$8a,$15,$1,$0,$0,$8a,$15,$1,$0,$0,$8a,$15,$82,$0,$88,$15,$83,$0,$88,$15,$84,$0,$85,$15,$90,$0
apple_sprite = $d0c10a
apple_sprite_data:
	.db $d,$e	; width, height
 .dl $33	; Compression Ratio: ( 79, 182 )
	.db $93,$0,$0,$44,$86,$0,$82,$8,$2,$0,$44,$0,$82,$8,$82,$0,$84,$8,$0,$44,$84,$8,$1,$0,$0,$8b,$8,$0,$0,$8b,$8,$0,$0,$8b,$8,$0,$0,$88,$8,$3,$2,$8,$8,$0,$88,$8,$4,$2,$8,$8,$0,$0,$86,$8,$2,$2,$8,$8,$82,$0,$89,$8,$83,$0,$87,$8,$85,$0,$2,$8,$8,$0,$82,$8,$8f,$0
thingy_sprite = $d0c1c2
thingy_sprite_data:
	.db $d,$e	; width, height
 .dl $3e	; Compression Ratio: ( 132, 182 )
	.db $82,$0,$0,$13,$8c,$0,$84,$13,$89,$0,$0,$13,$8a,$0,$2,$12,$2,$12,$87,$0,$82,$12,$0,$13,$82,$12,$84,$0,$3,$12,$13,$2,$13,$82,$12,$1,$13,$12,$83,$0,$8,$12,$12,$13,$12,$12,$2,$13,$12,$12,$82,$0,$2,$12,$2,$13,$82,$12,$16,$13,$12,$13,$12,$12,$0,$0,$12,$13,$12,$12,$2,$13,$12,$12,$2,$13,$12,$0,$0,$12,$2,$13,$82,$12,$0,$13,$83,$12,$82,$0,$8,$12,$12,$13,$2,$13,$2,$13,$12,$12,$83,$0,$82,$12,$0,$13,$82,$12,$1,$13,$12,$84,$0,$1,$12,$13,$82,$12,$1,$13,$12,$87,$0,$2,$12,$12,$13,$84,$0
otherthingy_sprite = $d0c27a
otherthingy_sprite_data:
	.db $d,$e	; width, height
 .dl $2a	; Compression Ratio: ( 103, 182 )
	.db $92,$0,$0,$8,$86,$0,$0,$e,$82,$0,$82,$8,$82,$0,$5,$e,$0,$0,$e,$0,$0,$84,$8,$12,$0,$0,$e,$0,$0,$e,$5,$8,$8,$5,$8,$5,$8,$8,$5,$e,$0,$0,$e,$83,$5,$0,$8,$83,$5,$4,$e,$0,$0,$e,$e,$86,$5,$1,$e,$e,$82,$0,$8,$e,$e,$5,$0,$5,$0,$5,$e,$e,$84,$0,$6,$e,$e,$0,$5,$0,$e,$e,$86,$0,$4,$e,$0,$5,$0,$44,$89,$0,$0,$5,$8b,$0,$0,$5,$9f,$0
bell_sprite = $d0c332
bell_sprite_data:
	.db $d,$e	; width, height
 .dl $39	; Compression Ratio: ( 98, 182 )
	.db $84,$0,$1,$5,$5,$88,$0,$5,$5,$5,$1,$1,$5,$5,$85,$0,$87,$5,$84,$0,$2,$5,$5,$1,$84,$5,$84,$0,$1,$5,$1,$85,$5,$83,$0,$2,$5,$5,$1,$86,$5,$82,$0,$2,$5,$5,$1,$86,$5,$82,$0,$89,$5,$4,$0,$0,$5,$5,$1,$88,$5,$3,$0,$5,$5,$1,$88,$5,$0,$0,$8b,$5,$1,$0,$5,$84,$14,$1,$2,$2,$82,$14,$2,$5,$0,$0,$84,$14,$1,$2,$2,$82,$14,$8e,$0
key_sprite = $d0c3ea
key_sprite_data:
	.db $d,$e	; width, height
 .dl $34	; Compression Ratio: ( 86, 182 )
	.db $84,$0,$82,$14,$87,$0,$1,$14,$44,$82,$1,$1,$14,$14,$85,$0,$1,$14,$44,$84,$14,$85,$0,$86,$14,$85,$0,$82,$14,$0,$44,$82,$14,$87,$0,$2,$2,$1,$2,$89,$0,$3,$2,$1,$2,$2,$88,$0,$2,$2,$1,$2,$89,$0,$2,$2,$1,$1,$89,$0,$2,$2,$1,$2,$89,$0,$3,$2,$1,$2,$2,$88,$0,$2,$2,$1,$2,$8a,$0,$0,$2,$92,$0
erase_sprite = $d0c4a2
erase_sprite_data:
	.db $d,$d	; width, height
 .dl $4	; Compression Ratio: ( 7, 169 )
	.db $ff,$1,$a8,$1
s100fruit_sprite = $d0c54d
s100fruit_sprite_data:
	.db $14,$7	; width, height
 .dl $22	; Compression Ratio: ( 109, 140 )
	.db $84,$0,$0,$d,$82,$0,$1,$d,$d,$82,$0,$1,$d,$d,$87,$0,$c,$d,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$87,$0,$b,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$87,$0,$b,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$87,$0,$b,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$87,$0,$b,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$86,$0,$82,$d,$3,$0,$0,$d,$d,$82,$0,$1,$d,$d,$83,$0
s300fruit_sprite = $d0c5db
s300fruit_sprite_data:
	.db $14,$7	; width, height
 .dl $28	; Compression Ratio: ( 112, 140 )
	.db $1,$0,$0,$84,$d,$3,$0,$0,$d,$d,$82,$0,$1,$d,$d,$88,$0,$b,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$86,$0,$0,$d,$82,$0,$8,$d,$0,$0,$d,$0,$d,$0,$0,$d,$87,$0,$b,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$88,$0,$a,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$84,$0,$0,$d,$82,$0,$a,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$85,$0,$82,$d,$82,$0,$1,$d,$d,$82,$0,$1,$d,$d,$83,$0
s500fruit_sprite = $d0c669
s500fruit_sprite_data:
	.db $14,$7	; width, height
 .dl $2a	; Compression Ratio: ( 112, 140 )
	.db $1,$0,$0,$84,$d,$3,$0,$0,$d,$d,$82,$0,$1,$d,$d,$85,$0,$0,$d,$84,$0,$8,$d,$0,$0,$d,$0,$d,$0,$0,$d,$84,$0,$83,$d,$a,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$88,$0,$a,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$88,$0,$a,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$84,$0,$0,$d,$82,$0,$a,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$85,$0,$82,$d,$82,$0,$1,$d,$d,$82,$0,$1,$d,$d,$83,$0
s700fruit_sprite = $d0c6f7
s700fruit_sprite_data:
	.db $14,$7	; width, height
 .dl $2a	; Compression Ratio: ( 114, 140 )
	.db $1,$0,$0,$84,$d,$3,$0,$0,$d,$d,$82,$0,$1,$d,$d,$85,$0,$0,$d,$82,$0,$a,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$87,$0,$b,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$87,$0,$b,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$86,$0,$0,$d,$82,$0,$8,$d,$0,$0,$d,$0,$d,$0,$0,$d,$86,$0,$0,$d,$82,$0,$8,$d,$0,$0,$d,$0,$d,$0,$0,$d,$86,$0,$0,$d,$83,$0,$1,$d,$d,$82,$0,$1,$d,$d,$83,$0
s1000fruit_sprite = $d0c785
s1000fruit_sprite_data:
	.db $14,$7	; width, height
 .dl $22	; Compression Ratio: ( 144, 140 )
	.db $2,$0,$0,$d,$82,$0,$1,$d,$d,$82,$0,$1,$d,$d,$82,$0,$1,$d,$d,$82,$0,$11,$d,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$82,$0,$10,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$82,$0,$10,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$82,$0,$10,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$82,$0,$12,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$0,$82,$d,$3,$0,$0,$d,$d,$82,$0,$1,$d,$d,$82,$0,$3,$d,$d,$0,$0
s2000fruit_sprite = $d0c813
s2000fruit_sprite_data:
	.db $14,$7	; width, height
 .dl $24	; Compression Ratio: ( 139, 140 )
	.db $0,$0,$82,$d,$82,$0,$1,$d,$d,$82,$0,$1,$d,$d,$82,$0,$3,$d,$d,$0,$d,$82,$0,$10,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$d,$82,$0,$f,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$82,$0,$13,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$0,$d,$82,$0,$f,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$83,$0,$c,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$85,$d,$3,$0,$0,$d,$d,$82,$0,$1,$d,$d,$82,$0,$2,$d,$d,$0
s3000fruit_sprite = $d0c8a1
s3000fruit_sprite_data:
	.db $14,$7	; width, height
 .dl $23	; Compression Ratio: ( 138, 140 )
	.db $84,$d,$3,$0,$0,$d,$d,$82,$0,$1,$d,$d,$82,$0,$1,$d,$d,$83,$0,$13,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$0,$d,$82,$0,$d,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$82,$0,$10,$d,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$83,$0,$10,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$d,$82,$0,$10,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$82,$d,$82,$0,$1,$d,$d,$82,$0,$1,$d,$d,$82,$0,$2,$d,$d,$0
s5000fruit_sprite = $d0c92f
s5000fruit_sprite_data:
	.db $14,$7	; width, height
 .dl $23	; Compression Ratio: ( 134, 140 )
	.db $84,$d,$3,$0,$0,$d,$d,$82,$0,$1,$d,$d,$82,$0,$3,$d,$d,$0,$d,$84,$0,$c,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$84,$d,$f,$0,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$83,$0,$f,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$83,$0,$10,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$d,$82,$0,$10,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$d,$0,$0,$d,$0,$82,$d,$82,$0,$1,$d,$d,$82,$0,$1,$d,$d,$82,$0,$2,$d,$d,$0
s200ghost_sprite = $d0c9bd
s200ghost_sprite_data:
	.db $10,$7	; width, height
 .dl $21	; Compression Ratio: ( 111, 112 )
	.db $0,$0,$82,$16,$82,$0,$1,$16,$16,$82,$0,$4,$16,$16,$0,$0,$16,$82,$0,$c,$16,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$16,$82,$0,$a,$16,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$83,$0,$b,$16,$0,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$82,$0,$0,$16,$82,$0,$b,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$0,$16,$83,$0,$9,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$84,$16,$3,$0,$0,$16,$16,$82,$0,$3,$16,$16,$0,$0
s400ghost_sprite = $d0ca2f
s400ghost_sprite_data:
	.db $10,$7	; width, height
 .dl $1b	; Compression Ratio: ( 110, 112 )
	.db $82,$0,$0,$16,$82,$0,$1,$16,$16,$82,$0,$1,$16,$16,$83,$0,$2d,$16,$16,$0,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$84,$16,$9,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$83,$0,$b,$16,$0,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$83,$0,$0,$16,$82,$0,$1,$16,$16,$82,$0,$3,$16,$16,$0,$0
s800ghost_sprite = $d0caa1
s800ghost_sprite_data:
	.db $10,$7	; width, height
 .dl $20	; Compression Ratio: ( 114, 112 )
	.db $0,$0,$82,$16,$82,$0,$1,$16,$16,$82,$0,$4,$16,$16,$0,$0,$16,$82,$0,$c,$16,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$16,$82,$0,$c,$16,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$0,$82,$16,$c,$0,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$16,$82,$0,$c,$16,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$16,$82,$0,$c,$16,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$0,$82,$16,$82,$0,$1,$16,$16,$82,$0,$3,$16,$16,$0,$0
s1600ghost_sprite = $d0cb13
s1600ghost_sprite_data:
	.db $10,$7	; width, height
 .dl $16	; Compression Ratio: ( 113, 112 )
	.db $2,$16,$0,$0,$82,$16,$3,$0,$0,$16,$16,$82,$0,$5,$16,$16,$0,$16,$0,$16,$83,$0,$b,$16,$0,$0,$16,$0,$16,$0,$0,$16,$16,$0,$16,$83,$0,$a,$16,$0,$0,$16,$0,$16,$0,$0,$16,$16,$0,$83,$16,$2e,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$16,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$16,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$0,$16,$0,$0,$16,$16,$0,$0,$16,$16,$82,$0,$1,$16,$16,$82,$0,$2,$16,$16,$0
pacmandie_1_sprite = $d0cb85
pacmandie_1_sprite_data:
	.db $f,$c	; width, height
 .dl $32	; Compression Ratio: ( 66, 180 )
	.db $8f,$0,$1,$5,$5,$88,$0,$3,$5,$5,$0,$0,$82,$5,$86,$0,$82,$5,$1,$0,$0,$83,$5,$84,$0,$83,$5,$1,$0,$0,$84,$5,$82,$0,$84,$5,$1,$0,$0,$85,$5,$0,$0,$85,$5,$82,$0,$8a,$5,$83,$0,$8a,$5,$84,$0,$88,$5,$87,$0,$84,$5,$a2,$0
pacmandie_2_sprite = $d0cc3b
pacmandie_2_sprite_data:
	.db $f,$c	; width, height
 .dl $26	; Compression Ratio: ( 49, 180 )
	.db $9e,$1,$0,$5,$8a,$1,$1,$5,$1,$83,$5,$86,$1,$88,$5,$84,$1,$8b,$5,$0,$1,$86,$5,$0,$1,$8c,$5,$1,$1,$1,$8c,$5,$82,$1,$8a,$5,$85,$1,$82,$5,$0,$1,$82,$5,$a1,$1
pacmandie_3_sprite = $d0ccf1
pacmandie_3_sprite_data:
	.db $f,$c	; width, height
 .dl $1c	; Compression Ratio: ( 33, 180 )
	.db $bb,$1,$82,$5,$88,$1,$88,$5,$82,$1,$94,$5,$0,$1,$8c,$5,$82,$1,$8a,$5,$85,$1,$82,$5,$0,$1,$82,$5,$a1,$1
pacmandie_4_sprite = $d0cda7
pacmandie_4_sprite_data:
	.db $f,$c	; width, height
 .dl $14	; Compression Ratio: ( 25, 180 )
	.db $ca,$1,$83,$5,$86,$1,$a1,$5,$0,$1,$8c,$5,$83,$1,$83,$5,$0,$1,$83,$5,$a0,$1
pacmandie_5_sprite = $d0ce5d
pacmandie_5_sprite_data:
	.db $f,$c	; width, height
 .dl $14	; Compression Ratio: ( 25, 180 )
	.db $dd,$1,$86,$5,$83,$1,$9d,$5,$0,$1,$8c,$5,$83,$1,$83,$5,$0,$1,$83,$5,$91,$1
pacmandie_6_sprite = $d0cf13
pacmandie_6_sprite_data:
	.db $f,$c	; width, height
 .dl $1f	; Compression Ratio: ( 37, 180 )
	.db $df,$1,$82,$5,$89,$1,$86,$5,$84,$1,$8c,$5,$0,$1,$8e,$5,$0,$1,$85,$5,$0,$1,$85,$5,$83,$1,$82,$5,$82,$1,$82,$5,$82,$1
pacmandie_7_sprite = $d0cfc9
pacmandie_7_sprite_data:
	.db $f,$c	; width, height
 .dl $22	; Compression Ratio: ( 43, 180 )
	.db $d1,$1,$0,$5,$8c,$1,$82,$5,$89,$1,$86,$5,$86,$1,$88,$5,$83,$1,$8c,$5,$1,$1,$1,$85,$5,$0,$1,$85,$5,$82,$1,$83,$5,$82,$1,$83,$5,$1,$1,$1
pacmandie_8_sprite = $d0d07f
pacmandie_8_sprite_data:
	.db $f,$c	; width, height
 .dl $20	; Compression Ratio: ( 37, 180 )
	.db $d1,$1,$0,$5,$8c,$1,$82,$5,$8a,$1,$84,$5,$89,$1,$84,$5,$88,$1,$86,$5,$86,$1,$88,$5,$86,$1,$82,$5,$0,$1,$82,$5,$83,$1
pacmandie_9_sprite = $d0d135
pacmandie_9_sprite_data:
	.db $f,$c	; width, height
 .dl $1b	; Compression Ratio: ( 35, 180 )
	.db $d1,$1,$0,$5,$8d,$1,$0,$5,$8c,$1,$82,$5,$8b,$1,$82,$5,$8b,$1,$82,$5,$8a,$1,$84,$5,$8a,$1,$2,$5,$1,$5,$85,$1
pacmandie_10_sprite = $d0d1eb
pacmandie_10_sprite_data:
	.db $f,$c	; width, height
 .dl $14	; Compression Ratio: ( 29, 180 )
	.db $d1,$1,$0,$5,$8d,$1,$0,$5,$8d,$1,$0,$5,$8d,$1,$0,$5,$8d,$1,$0,$5,$8d,$1,$0,$5,$95,$1
pacmandie_11_sprite = $d0d2a1
pacmandie_11_sprite_data:
	.db $f,$c	; width, height
 .dl $2c	; Compression Ratio: ( 73, 180 )
	.db $93,$1,$0,$5,$82,$1,$0,$5,$87,$1,$5,$5,$1,$1,$5,$1,$5,$89,$1,$0,$5,$85,$1,$0,$5,$8c,$1,$0,$5,$85,$1,$1,$5,$5,$95,$1,$1,$5,$5,$85,$1,$0,$5,$8c,$1,$0,$5,$85,$1,$0,$5,$89,$1,$5,$5,$1,$5,$1,$1,$5,$87,$1,$0,$5,$82,$1,$0,$5,$93,$1