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

// Function: sub_01DA7998
// Address: 0x1da7998 - 0x1da7a50
void sub_01DA7998_0x1da7998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7998_0x1da7998");
#endif

    switch (ctx->pc) {
        case 0x1da79d4u: goto label_1da79d4;
        case 0x1da79e4u: goto label_1da79e4;
        case 0x1da79f8u: goto label_1da79f8;
        case 0x1da7a0cu: goto label_1da7a0c;
        case 0x1da7a1cu: goto label_1da7a1c;
        default: break;
    }

    ctx->pc = 0x1da7998u;

    // 0x1da7998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1da7998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1da799c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da799cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da79a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1da79a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1da79a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1da79a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1da79a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da79a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da79ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da79acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da79b0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1da79b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da79b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1da79b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1da79b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1da79b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1da79bc: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1da79bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1da79c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1da79c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1da79c4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1da79c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da79c8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1da79c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da79cc: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA79CCu;
    SET_GPR_U32(ctx, 31, 0x1DA79D4u);
    ctx->pc = 0x1DA79D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA79CCu;
    // 0x1da79d0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA79CCu, 0x1DA79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA79D4u;
label_1da79d4:
    // 0x1da79d4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da79d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da79d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1da79d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da79dc: 0xc769b9a  jal         func_1DA6E68
    ctx->pc = 0x1DA79DCu;
    SET_GPR_U32(ctx, 31, 0x1DA79E4u);
    ctx->pc = 0x1DA79E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA79DCu;
    // 0x1da79e0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E68u, 0x1DA79DCu, 0x1DA79E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA79E4u;
label_1da79e4:
    // 0x1da79e4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1da79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1da79e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1da79e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da79ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da79ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da79f0: 0xc769b9c  jal         func_1DA6E70
    ctx->pc = 0x1DA79F0u;
    SET_GPR_U32(ctx, 31, 0x1DA79F8u);
    ctx->pc = 0x1DA79F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA79F0u;
    // 0x1da79f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E70u, 0x1DA79F0u, 0x1DA79F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA79F8u;
label_1da79f8:
    // 0x1da79f8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1da79f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1da79fc: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1da79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1da7a00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1da7a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7a04: 0xc769b9e  jal         func_1DA6E78
    ctx->pc = 0x1DA7A04u;
    SET_GPR_U32(ctx, 31, 0x1DA7A0Cu);
    ctx->pc = 0x1DA7A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7A04u;
    // 0x1da7a08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E78u, 0x1DA7A04u, 0x1DA7A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7A0Cu;
label_1da7a0c:
    // 0x1da7a0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1da7a0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da7a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da7a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7a14: 0xc769b92  jal         func_1DA6E48
    ctx->pc = 0x1DA7A14u;
    SET_GPR_U32(ctx, 31, 0x1DA7A1Cu);
    ctx->pc = 0x1DA7A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7A14u;
    // 0x1da7a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E48u, 0x1DA7A14u, 0x1DA7A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7A1Cu;
label_1da7a1c:
    // 0x1da7a1c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1da7a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1da7a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da7a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7a24: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1da7a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7a28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da7a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da7a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da7a30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1da7a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da7a34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1da7a34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1da7a38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1da7a38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da7a3c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1da7a3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1da7a40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1da7a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da7a44: 0x8769ba0  j           func_1DA6E80
    ctx->pc = 0x1DA7A44u;
    ctx->pc = 0x1DA7A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7A44u;
    // 0x1da7a48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E80u;
    sub_01DA6E80_0x1da6e80(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA7A4Cu;
    // 0x1da7a4c: 0x0  nop
    ctx->pc = 0x1da7a4cu;
    // NOP
    ctx->pc = 0x1da7a50u;
}
