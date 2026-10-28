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

// Function: sub_01DCD890
// Address: 0x1dcd890 - 0x1dcd9b8
void sub_01DCD890_0x1dcd890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCD890_0x1dcd890");
#endif

    switch (ctx->pc) {
        case 0x1dcd8ccu: goto label_1dcd8cc;
        case 0x1dcd8e0u: goto label_1dcd8e0;
        case 0x1dcd8f4u: goto label_1dcd8f4;
        case 0x1dcd908u: goto label_1dcd908;
        case 0x1dcd924u: goto label_1dcd924;
        case 0x1dcd938u: goto label_1dcd938;
        case 0x1dcd95cu: goto label_1dcd95c;
        case 0x1dcd978u: goto label_1dcd978;
        default: break;
    }

    ctx->pc = 0x1dcd890u;

    // 0x1dcd890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dcd890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dcd894: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dcd894u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1dcd898: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dcd898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dcd89c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcd89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcd8a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcd8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcd8a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dcd8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dcd8a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dcd8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dcd8ac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dcd8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dcd8b0: 0x15e0002d  bnez        $t7, . + 4 + (0x2D << 2)
    ctx->pc = 0x1DCD8B0u;
    {
        const bool branch_taken_0x1dcd8b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD8B0u;
        // 0x1dcd8b4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd8b0) {
            ctx->pc = 0x1DCD968u;
            goto label_1dcd968;
        }
    }
    ctx->pc = 0x1DCD8B8u;
    // 0x1dcd8b8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcd8b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcd8bc: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcd8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcd8c0: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcd8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcd8c4: 0xc773608  jal         func_1DCD820
    ctx->pc = 0x1DCD8C4u;
    SET_GPR_U32(ctx, 31, 0x1DCD8CCu);
    ctx->pc = 0x1DCD8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD8C4u;
    // 0x1dcd8c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD820u, 0x1DCD8C4u, 0x1DCD8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD8CCu;
label_1dcd8cc:
    // 0x1dcd8cc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcd8ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcd8d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcd8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd8d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1dcd8d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd8d8: 0xc77360a  jal         func_1DCD828
    ctx->pc = 0x1DCD8D8u;
    SET_GPR_U32(ctx, 31, 0x1DCD8E0u);
    ctx->pc = 0x1DCD8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD8D8u;
    // 0x1dcd8dc: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD828u, 0x1DCD8D8u, 0x1DCD8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD8E0u;
label_1dcd8e0:
    // 0x1dcd8e0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcd8e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcd8e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcd8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd8e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dcd8e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd8ec: 0xc77360c  jal         func_1DCD830
    ctx->pc = 0x1DCD8ECu;
    SET_GPR_U32(ctx, 31, 0x1DCD8F4u);
    ctx->pc = 0x1DCD8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD8ECu;
    // 0x1dcd8f0: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD830u, 0x1DCD8ECu, 0x1DCD8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD8F4u;
label_1dcd8f4:
    // 0x1dcd8f4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcd8f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcd8f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcd8f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd8fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcd8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd900: 0xc77360e  jal         func_1DCD838
    ctx->pc = 0x1DCD900u;
    SET_GPR_U32(ctx, 31, 0x1DCD908u);
    ctx->pc = 0x1DCD904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD900u;
    // 0x1dcd904: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD838u, 0x1DCD900u, 0x1DCD908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD908u;
label_1dcd908:
    // 0x1dcd908: 0x8e2e0008  lw          $t6, 0x8($s1)
    ctx->pc = 0x1dcd908u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dcd90c: 0x240f001e  addiu       $t7, $zero, 0x1E
    ctx->pc = 0x1dcd90cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dcd910: 0x15cf0009  bne         $t6, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DCD910u;
    {
        const bool branch_taken_0x1dcd910 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DCD914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD910u;
        // 0x1dcd914: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd910) {
            ctx->pc = 0x1DCD938u;
            goto label_1dcd938;
        }
    }
    ctx->pc = 0x1DCD918u;
    // 0x1dcd918: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcd918u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcd91c: 0xc77360e  jal         func_1DCD838
    ctx->pc = 0x1DCD91Cu;
    SET_GPR_U32(ctx, 31, 0x1DCD924u);
    ctx->pc = 0x1DCD920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD91Cu;
    // 0x1dcd920: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD838u, 0x1DCD91Cu, 0x1DCD924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD924u;
label_1dcd924:
    // 0x1dcd924: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcd924u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcd928: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcd928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd92c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcd92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd930: 0xc77360c  jal         func_1DCD830
    ctx->pc = 0x1DCD930u;
    SET_GPR_U32(ctx, 31, 0x1DCD938u);
    ctx->pc = 0x1DCD934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD930u;
    // 0x1dcd934: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD830u, 0x1DCD930u, 0x1DCD938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD938u;
label_1dcd938:
    // 0x1dcd938: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcd938u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcd93c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dcd93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd940: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1dcd940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd944: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dcd944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd948: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1dcd948u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcd94c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1dcd94cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd950: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dcd950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd954: 0xc773610  jal         func_1DCD840
    ctx->pc = 0x1DCD954u;
    SET_GPR_U32(ctx, 31, 0x1DCD95Cu);
    ctx->pc = 0x1DCD958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD954u;
    // 0x1dcd958: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD840u, 0x1DCD954u, 0x1DCD95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD95Cu;
label_1dcd95c:
    // 0x1dcd95c: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dcd95cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1dcd960: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dcd960u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dcd964: 0xaf8f801c  sw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dcd964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 15));
label_1dcd968:
    // 0x1dcd968: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcd968u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcd96c: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dcd96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcd970: 0xc773612  jal         func_1DCD848
    ctx->pc = 0x1DCD970u;
    SET_GPR_U32(ctx, 31, 0x1DCD978u);
    ctx->pc = 0x1DCD974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD970u;
    // 0x1dcd974: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD848u, 0x1DCD970u, 0x1DCD978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD978u;
label_1dcd978:
    // 0x1dcd978: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcd978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcd97c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dcd97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dcd980: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCD980u;
    {
        const bool branch_taken_0x1dcd980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD980u;
        // 0x1dcd984: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd980) {
            ctx->pc = 0x1DCD990u;
            goto label_1dcd990;
        }
    }
    ctx->pc = 0x1DCD988u;
    // 0x1dcd988: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dcd988u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dcd98c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dcd98cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dcd990:
    // 0x1dcd990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcd990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcd994: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1dcd994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcd998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcd99c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dcd99cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcd9a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dcd9a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dcd9a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dcd9a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcd9a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dcd9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dcd9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCD9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD9ACu;
        // 0x1dcd9b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCD9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCD9B4u;
    // 0x1dcd9b4: 0x0  nop
    ctx->pc = 0x1dcd9b4u;
    // NOP
    ctx->pc = 0x1dcd9b8u;
}
