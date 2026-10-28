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

// Function: sub_01C00BA8
// Address: 0x1c00ba8 - 0x1c00c60
void sub_01C00BA8_0x1c00ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00BA8_0x1c00ba8");
#endif

    switch (ctx->pc) {
        case 0x1c00be4u: goto label_1c00be4;
        case 0x1c00bf4u: goto label_1c00bf4;
        case 0x1c00c08u: goto label_1c00c08;
        case 0x1c00c1cu: goto label_1c00c1c;
        case 0x1c00c2cu: goto label_1c00c2c;
        default: break;
    }

    ctx->pc = 0x1c00ba8u;

    // 0x1c00ba8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c00ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c00bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c00bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c00bb0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c00bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c00bb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c00bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c00bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c00bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00bbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c00bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c00bc0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c00bc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00bc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c00bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c00bc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c00bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c00bcc: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1c00bccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c00bd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c00bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c00bd4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c00bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c00bd8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c00bd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00bdc: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C00BDCu;
    SET_GPR_U32(ctx, 31, 0x1C00BE4u);
    ctx->pc = 0x1C00BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00BDCu;
    // 0x1c00be0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C00BDCu, 0x1C00BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00BE4u;
label_1c00be4:
    // 0x1c00be4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c00be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c00be8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c00be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00bec: 0xc70001a  jal         func_1C00068
    ctx->pc = 0x1C00BECu;
    SET_GPR_U32(ctx, 31, 0x1C00BF4u);
    ctx->pc = 0x1C00BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00BECu;
    // 0x1c00bf0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00068u, 0x1C00BECu, 0x1C00BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00BF4u;
label_1c00bf4:
    // 0x1c00bf4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c00bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c00bf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c00bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00c00: 0xc70001c  jal         func_1C00070
    ctx->pc = 0x1C00C00u;
    SET_GPR_U32(ctx, 31, 0x1C00C08u);
    ctx->pc = 0x1C00C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00C00u;
    // 0x1c00c04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00070u, 0x1C00C00u, 0x1C00C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00C08u;
label_1c00c08:
    // 0x1c00c08: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c00c08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c00c0c: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1c00c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1c00c10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c00c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00c14: 0xc70001e  jal         func_1C00078
    ctx->pc = 0x1C00C14u;
    SET_GPR_U32(ctx, 31, 0x1C00C1Cu);
    ctx->pc = 0x1C00C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00C14u;
    // 0x1c00c18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00078u, 0x1C00C14u, 0x1C00C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00C1Cu;
label_1c00c1c:
    // 0x1c00c1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c00c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c00c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00c24: 0xc700012  jal         func_1C00048
    ctx->pc = 0x1C00C24u;
    SET_GPR_U32(ctx, 31, 0x1C00C2Cu);
    ctx->pc = 0x1C00C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00C24u;
    // 0x1c00c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00048u, 0x1C00C24u, 0x1C00C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00C2Cu;
label_1c00c2c:
    // 0x1c00c2c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1c00c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c00c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00c34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c00c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00c38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c00c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c00c3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c00c3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c00c40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c00c40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c00c44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c00c44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c00c48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c00c48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c00c4c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c00c4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c00c50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c00c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c00c54: 0x8700020  j           func_1C00080
    ctx->pc = 0x1C00C54u;
    ctx->pc = 0x1C00C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00C54u;
    // 0x1c00c58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00080u;
    sub_01C00080_0x1c00080(rdram, ctx, runtime); return;
    ctx->pc = 0x1C00C5Cu;
    // 0x1c00c5c: 0x0  nop
    ctx->pc = 0x1c00c5cu;
    // NOP
    ctx->pc = 0x1c00c60u;
}
