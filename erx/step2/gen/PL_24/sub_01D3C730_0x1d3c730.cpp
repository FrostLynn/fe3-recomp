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

// Function: sub_01D3C730
// Address: 0x1d3c730 - 0x1d3c840
void sub_01D3C730_0x1d3c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C730_0x1d3c730");
#endif

    switch (ctx->pc) {
        case 0x1d3c74cu: goto label_1d3c74c;
        case 0x1d3c754u: goto label_1d3c754;
        case 0x1d3c768u: goto label_1d3c768;
        case 0x1d3c76cu: goto label_1d3c76c;
        case 0x1d3c7c4u: goto label_1d3c7c4;
        case 0x1d3c7d4u: goto label_1d3c7d4;
        case 0x1d3c7e8u: goto label_1d3c7e8;
        case 0x1d3c7fcu: goto label_1d3c7fc;
        case 0x1d3c80cu: goto label_1d3c80c;
        default: break;
    }

    ctx->pc = 0x1d3c730u;

    // 0x1d3c730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3c734: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d3c734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d3c738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3c73c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3c73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c740: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3c740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3c744: 0xc74ef10  jal         func_1D3BC40
    ctx->pc = 0x1D3C744u;
    SET_GPR_U32(ctx, 31, 0x1D3C74Cu);
    ctx->pc = 0x1D3C748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C744u;
    // 0x1d3c748: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC40u, 0x1D3C744u, 0x1D3C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C74Cu;
label_1d3c74c:
    // 0x1d3c74c: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3C74Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C754u);
    ctx->pc = 0x1D3C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C74Cu;
    // 0x1d3c750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3C74Cu, 0x1D3C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C754u;
label_1d3c754:
    // 0x1d3c754: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3c754u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3c758: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3C758u;
    {
        const bool branch_taken_0x1d3c758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C758u;
        // 0x1d3c75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c758) {
            ctx->pc = 0x1D3C77Cu;
            goto label_1d3c77c;
        }
    }
    ctx->pc = 0x1D3C760u;
    // 0x1d3c760: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3C760u;
    SET_GPR_U32(ctx, 31, 0x1D3C768u);
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3C760u, 0x1D3C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C768u;
label_1d3c768:
    // 0x1d3c768: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d3c768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d3c76c:
    // 0x1d3c76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3c76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3c770: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3c770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3c774: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3C774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C774u;
        // 0x1d3c778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3C774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3C77Cu;
label_1d3c77c:
    // 0x1d3c77c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3C77Cu;
    {
        const bool branch_taken_0x1d3c77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C77Cu;
        // 0x1d3c780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c77c) {
            ctx->pc = 0x1D3C76Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3c76c;
        }
    }
    ctx->pc = 0x1D3C784u;
    // 0x1d3c784: 0x0  nop
    ctx->pc = 0x1d3c784u;
    // NOP
    // 0x1d3c788: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d3c788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d3c78c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3c790: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d3c790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d3c794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d3c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d3c798: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3c798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c79c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3c7a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d3c7a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c7a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3c7a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d3c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d3c7ac: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1d3c7acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d3c7b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d3c7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d3c7b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3c7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3c7b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d3c7b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c7bc: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3C7BCu;
    SET_GPR_U32(ctx, 31, 0x1D3C7C4u);
    ctx->pc = 0x1D3C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C7BCu;
    // 0x1d3c7c0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3C7BCu, 0x1D3C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C7C4u;
label_1d3c7c4:
    // 0x1d3c7c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3c7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3c7c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d3c7c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c7cc: 0xc74ef18  jal         func_1D3BC60
    ctx->pc = 0x1D3C7CCu;
    SET_GPR_U32(ctx, 31, 0x1D3C7D4u);
    ctx->pc = 0x1D3C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C7CCu;
    // 0x1d3c7d0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC60u, 0x1D3C7CCu, 0x1D3C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C7D4u;
label_1d3c7d4:
    // 0x1d3c7d4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d3c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d3c7d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d3c7d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3c7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c7e0: 0xc74ef1a  jal         func_1D3BC68
    ctx->pc = 0x1D3C7E0u;
    SET_GPR_U32(ctx, 31, 0x1D3C7E8u);
    ctx->pc = 0x1D3C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C7E0u;
    // 0x1d3c7e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC68u, 0x1D3C7E0u, 0x1D3C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C7E8u;
label_1d3c7e8:
    // 0x1d3c7e8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d3c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d3c7ec: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d3c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d3c7f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d3c7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c7f4: 0xc74ef1c  jal         func_1D3BC70
    ctx->pc = 0x1D3C7F4u;
    SET_GPR_U32(ctx, 31, 0x1D3C7FCu);
    ctx->pc = 0x1D3C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C7F4u;
    // 0x1d3c7f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC70u, 0x1D3C7F4u, 0x1D3C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C7FCu;
label_1d3c7fc:
    // 0x1d3c7fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d3c7fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d3c800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3c800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c804: 0xc74ef10  jal         func_1D3BC40
    ctx->pc = 0x1D3C804u;
    SET_GPR_U32(ctx, 31, 0x1D3C80Cu);
    ctx->pc = 0x1D3C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C804u;
    // 0x1d3c808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC40u, 0x1D3C804u, 0x1D3C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C80Cu;
label_1d3c80c:
    // 0x1d3c80c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1d3c80cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d3c810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3c810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c814: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d3c814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3c818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3c81c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3c81cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3c820: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3c820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3c824: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d3c824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3c828: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d3c828u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3c82c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d3c82cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d3c830: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d3c830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3c834: 0x874ef1e  j           func_1D3BC78
    ctx->pc = 0x1D3C834u;
    ctx->pc = 0x1D3C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C834u;
    // 0x1d3c838: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC78u;
    sub_01D3BC78_0x1d3bc78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3C83Cu;
    // 0x1d3c83c: 0x0  nop
    ctx->pc = 0x1d3c83cu;
    // NOP
    ctx->pc = 0x1d3c840u;
}
