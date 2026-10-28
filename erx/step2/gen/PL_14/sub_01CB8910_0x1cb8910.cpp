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

// Function: sub_01CB8910
// Address: 0x1cb8910 - 0x1cb89f8
void sub_01CB8910_0x1cb8910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB8910_0x1cb8910");
#endif

    switch (ctx->pc) {
        case 0x1cb8924u: goto label_1cb8924;
        case 0x1cb8938u: goto label_1cb8938;
        case 0x1cb893cu: goto label_1cb893c;
        case 0x1cb8958u: goto label_1cb8958;
        case 0x1cb8964u: goto label_1cb8964;
        case 0x1cb89a4u: goto label_1cb89a4;
        case 0x1cb89d0u: goto label_1cb89d0;
        case 0x1cb89dcu: goto label_1cb89dc;
        case 0x1cb89e8u: goto label_1cb89e8;
        default: break;
    }

    ctx->pc = 0x1cb8910u;

    // 0x1cb8910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb8914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb8918: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb8918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb891c: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB891Cu;
    SET_GPR_U32(ctx, 31, 0x1CB8924u);
    ctx->pc = 0x1CB8920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB891Cu;
    // 0x1cb8920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB891Cu, 0x1CB8924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8924u;
label_1cb8924:
    // 0x1cb8924: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb8924u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8928: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB8928u;
    {
        const bool branch_taken_0x1cb8928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8928u;
        // 0x1cb892c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8928) {
            ctx->pc = 0x1CB894Cu;
            goto label_1cb894c;
        }
    }
    ctx->pc = 0x1CB8930u;
    // 0x1cb8930: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB8930u;
    SET_GPR_U32(ctx, 31, 0x1CB8938u);
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB8930u, 0x1CB8938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8938u;
label_1cb8938:
    // 0x1cb8938: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cb8938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cb893c:
    // 0x1cb893c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb893cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8940: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb8940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8944: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8944u;
        // 0x1cb8948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB894Cu;
label_1cb894c:
    // 0x1cb894c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb894cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb8950: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB8950u;
    SET_GPR_U32(ctx, 31, 0x1CB8958u);
    ctx->pc = 0x1CB8954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8950u;
    // 0x1cb8954: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB8950u, 0x1CB8958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8958u;
label_1cb8958:
    // 0x1cb8958: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cb8958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cb895c: 0xc72d9e4  jal         func_1CB6790
    ctx->pc = 0x1CB895Cu;
    SET_GPR_U32(ctx, 31, 0x1CB8964u);
    ctx->pc = 0x1CB8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB895Cu;
    // 0x1cb8960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6790u, 0x1CB895Cu, 0x1CB8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8964u;
label_1cb8964:
    // 0x1cb8964: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CB8964u;
    {
        const bool branch_taken_0x1cb8964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8964u;
        // 0x1cb8968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8964) {
            ctx->pc = 0x1CB893Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb893c;
        }
    }
    ctx->pc = 0x1CB896Cu;
    // 0x1cb896c: 0x0  nop
    ctx->pc = 0x1cb896cu;
    // NOP
    // 0x1cb8970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb8970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb8974: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8974u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8978: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cb8978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cb897c: 0x25ee2370  addiu       $t6, $t7, 0x2370
    ctx->pc = 0x1cb897cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 9072));
    // 0x1cb8980: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cb8980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cb8984: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1cb8984u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CC2374u));
    // 0x1cb8988: 0x8ded2370  lw          $t5, 0x2370($t7)
    ctx->pc = 0x1cb8988u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CC2370u));
    // 0x1cb898c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb898cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8990: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1cb8990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1cb8994: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1cb8994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1cb8998: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cb8998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cb899c: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB899Cu;
    SET_GPR_U32(ctx, 31, 0x1CB89A4u);
    ctx->pc = 0x1CB89A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB899Cu;
    // 0x1cb89a0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB899Cu, 0x1CB89A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB89A4u;
label_1cb89a4:
    // 0x1cb89a4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cb89a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cb89a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb89a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb89ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb89acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb89b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb89b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb89b4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cb89b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cb89b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cb89b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb89bc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1cb89bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1cb89c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb89c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb89c4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cb89c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cb89c8: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB89C8u;
    SET_GPR_U32(ctx, 31, 0x1CB89D0u);
    ctx->pc = 0x1CB89CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB89C8u;
    // 0x1cb89cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB89C8u, 0x1CB89D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB89D0u;
label_1cb89d0:
    // 0x1cb89d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb89d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb89d4: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB89D4u;
    SET_GPR_U32(ctx, 31, 0x1CB89DCu);
    ctx->pc = 0x1CB89D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB89D4u;
    // 0x1cb89d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB89D4u, 0x1CB89DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB89DCu;
label_1cb89dc:
    // 0x1cb89dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cb89dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb89e0: 0xc72d9e6  jal         func_1CB6798
    ctx->pc = 0x1CB89E0u;
    SET_GPR_U32(ctx, 31, 0x1CB89E8u);
    ctx->pc = 0x1CB89E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB89E0u;
    // 0x1cb89e4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6798u, 0x1CB89E0u, 0x1CB89E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB89E8u;
label_1cb89e8:
    // 0x1cb89e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cb89e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb89ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cb89ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb89f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB89F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB89F0u;
        // 0x1cb89f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB89F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB89F8u;
}
