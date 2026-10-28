#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01DCA4F0
// Address: 0x1dca4f0 - 0x1dca5f8
void sub_01DCA4F0_0x1dca4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCA4F0_0x1dca4f0");
#endif

    switch (ctx->pc) {
        case 0x1dca5b0u: goto label_1dca5b0;
        default: break;
    }

    ctx->pc = 0x1dca4f0u;

    // 0x1dca4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dca4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dca4f4: 0x8f8b8018  lw          $t3, -0x7FE8($gp)
    ctx->pc = 0x1dca4f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dca4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dca4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dca4fc: 0x8d6e00e0  lw          $t6, 0xE0($t3)
    ctx->pc = 0x1dca4fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 224)));
    // 0x1dca500: 0x8dcf000c  lw          $t7, 0xC($t6)
    ctx->pc = 0x1dca500u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x1dca504: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1dca504u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1dca508: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x1dca508u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x1dca50c: 0x25ec00d0  addiu       $t4, $t7, 0xD0
    ctx->pc = 0x1dca50cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 208));
    // 0x1dca510: 0x8d8e0014  lw          $t6, 0x14($t4)
    ctx->pc = 0x1dca510u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x1dca514: 0x240f0157  addiu       $t7, $zero, 0x157
    ctx->pc = 0x1dca514u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 343));
    // 0x1dca518: 0x8dcd03a4  lw          $t5, 0x3A4($t6)
    ctx->pc = 0x1dca518u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 932)));
    // 0x1dca51c: 0x55af0004  bnel        $t5, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCA51Cu;
    {
        const bool branch_taken_0x1dca51c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        if (branch_taken_0x1dca51c) {
            ctx->pc = 0x1DCA520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCA51Cu;
            // 0x1dca520: 0x8d8f0014  lw          $t7, 0x14($t4) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCA530u;
            goto label_1dca530;
        }
    }
    ctx->pc = 0x1DCA524u;
    // 0x1dca524: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dca524u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dca528: 0xa16f0428  sb          $t7, 0x428($t3)
    ctx->pc = 0x1dca528u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1064), (uint8_t)GPR_U32(ctx, 15));
    // 0x1dca52c: 0x8d8f0014  lw          $t7, 0x14($t4)
    ctx->pc = 0x1dca52cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
label_1dca530:
    // 0x1dca530: 0x240e0158  addiu       $t6, $zero, 0x158
    ctx->pc = 0x1dca530u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x1dca534: 0x8ded03a4  lw          $t5, 0x3A4($t7)
    ctx->pc = 0x1dca534u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 932)));
    // 0x1dca538: 0x55ae0004  bnel        $t5, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCA538u;
    {
        const bool branch_taken_0x1dca538 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        if (branch_taken_0x1dca538) {
            ctx->pc = 0x1DCA53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCA538u;
            // 0x1dca53c: 0x8d8f0014  lw          $t7, 0x14($t4) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCA54Cu;
            goto label_1dca54c;
        }
    }
    ctx->pc = 0x1DCA540u;
    // 0x1dca540: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dca540u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dca544: 0xa16f0429  sb          $t7, 0x429($t3)
    ctx->pc = 0x1dca544u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1065), (uint8_t)GPR_U32(ctx, 15));
    // 0x1dca548: 0x8d8f0014  lw          $t7, 0x14($t4)
    ctx->pc = 0x1dca548u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
label_1dca54c:
    // 0x1dca54c: 0x240e0159  addiu       $t6, $zero, 0x159
    ctx->pc = 0x1dca54cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 345));
    // 0x1dca550: 0x8ded03a4  lw          $t5, 0x3A4($t7)
    ctx->pc = 0x1dca550u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 932)));
    // 0x1dca554: 0x55ae0007  bnel        $t5, $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DCA554u;
    {
        const bool branch_taken_0x1dca554 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        if (branch_taken_0x1dca554) {
            ctx->pc = 0x1DCA558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCA554u;
            // 0x1dca558: 0xdd6f0428  ld          $t7, 0x428($t3) (Delay Slot)
            SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 11), 1064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCA574u;
            goto label_1dca574;
        }
    }
    ctx->pc = 0x1DCA55Cu;
    // 0x1dca55c: 0x956f056e  lhu         $t7, 0x56E($t3)
    ctx->pc = 0x1dca55cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 1390)));
    // 0x1dca560: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dca560u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dca564: 0xa16e042a  sb          $t6, 0x42A($t3)
    ctx->pc = 0x1dca564u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1066), (uint8_t)GPR_U32(ctx, 14));
    // 0x1dca568: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x1dca568u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
    // 0x1dca56c: 0xa56f056e  sh          $t7, 0x56E($t3)
    ctx->pc = 0x1dca56cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dca570: 0xdd6f0428  ld          $t7, 0x428($t3)
    ctx->pc = 0x1dca570u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 11), 1064)));
label_1dca574:
    // 0x1dca574: 0x3c0e00ff  lui         $t6, 0xFF
    ctx->pc = 0x1dca574u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)255 << 16));
    // 0x1dca578: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x1dca578u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x1dca57c: 0x3c0d0001  lui         $t5, 0x1
    ctx->pc = 0x1dca57cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1 << 16));
    // 0x1dca580: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x1dca580u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x1dca584: 0x35ad0101  ori         $t5, $t5, 0x101
    ctx->pc = 0x1dca584u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)257);
    // 0x1dca588: 0x55ed0007  bnel        $t7, $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DCA588u;
    {
        const bool branch_taken_0x1dca588 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 13));
        if (branch_taken_0x1dca588) {
            ctx->pc = 0x1DCA58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCA588u;
            // 0x1dca58c: 0x8d6400e0  lw          $a0, 0xE0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCA5A8u;
            goto label_1dca5a8;
        }
    }
    ctx->pc = 0x1DCA590u;
    // 0x1dca590: 0x956f056e  lhu         $t7, 0x56E($t3)
    ctx->pc = 0x1dca590u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 1390)));
    // 0x1dca594: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dca594u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dca598: 0xa16e042b  sb          $t6, 0x42B($t3)
    ctx->pc = 0x1dca598u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1067), (uint8_t)GPR_U32(ctx, 14));
    // 0x1dca59c: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x1dca59cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x1dca5a0: 0xa56f056e  sh          $t7, 0x56E($t3)
    ctx->pc = 0x1dca5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dca5a4: 0x8d6400e0  lw          $a0, 0xE0($t3)
    ctx->pc = 0x1dca5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 224)));
label_1dca5a8:
    // 0x1dca5a8: 0xc7728c6  jal         func_1DCA318
    ctx->pc = 0x1DCA5A8u;
    SET_GPR_U32(ctx, 31, 0x1DCA5B0u);
    ctx->pc = 0x1DCA5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA5A8u;
    // 0x1dca5ac: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCA318u, 0x1DCA5A8u, 0x1DCA5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA5B0u;
label_1dca5b0:
    // 0x1dca5b0: 0x8c4f0248  lw          $t7, 0x248($v0)
    ctx->pc = 0x1dca5b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x1dca5b4: 0x8ded4864  lw          $t5, 0x4864($t7)
    ctx->pc = 0x1dca5b4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dca5b8: 0x8dae0480  lw          $t6, 0x480($t5)
    ctx->pc = 0x1dca5b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1152)));
    // 0x1dca5bc: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x1dca5bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dca5c0: 0x11cf0004  beq         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCA5C0u;
    {
        const bool branch_taken_0x1dca5c0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DCA5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA5C0u;
        // 0x1dca5c4: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca5c0) {
            ctx->pc = 0x1DCA5D4u;
            goto label_1dca5d4;
        }
    }
    ctx->pc = 0x1DCA5C8u;
    // 0x1dca5c8: 0x11cf0002  beq         $t6, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCA5C8u;
    {
        const bool branch_taken_0x1dca5c8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DCA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA5C8u;
        // 0x1dca5cc: 0x240f0005  addiu       $t7, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca5c8) {
            ctx->pc = 0x1DCA5D4u;
            goto label_1dca5d4;
        }
    }
    ctx->pc = 0x1DCA5D0u;
    // 0x1dca5d0: 0xadaf0480  sw          $t7, 0x480($t5)
    ctx->pc = 0x1dca5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 1152), GPR_U32(ctx, 15));
label_1dca5d4:
    // 0x1dca5d4: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dca5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dca5d8: 0x2405f6d9  addiu       $a1, $zero, -0x927
    ctx->pc = 0x1dca5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964953));
    // 0x1dca5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dca5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dca5e0: 0x2406f6d8  addiu       $a2, $zero, -0x928
    ctx->pc = 0x1dca5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964952));
    // 0x1dca5e4: 0x2407f6d7  addiu       $a3, $zero, -0x929
    ctx->pc = 0x1dca5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964951));
    // 0x1dca5e8: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dca5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dca5ec: 0x87728d6  j           func_1DCA358
    ctx->pc = 0x1DCA5ECu;
    ctx->pc = 0x1DCA5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA5ECu;
    // 0x1dca5f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA358u;
    sub_01DCA358_0x1dca358(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCA5F4u;
    // 0x1dca5f4: 0x0  nop
    ctx->pc = 0x1dca5f4u;
    // NOP
    ctx->pc = 0x1dca5f8u;
}
