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

// Function: sub_01CDADB0
// Address: 0x1cdadb0 - 0x1cdae68
void sub_01CDADB0_0x1cdadb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDADB0_0x1cdadb0");
#endif

    switch (ctx->pc) {
        case 0x1cdadecu: goto label_1cdadec;
        case 0x1cdadfcu: goto label_1cdadfc;
        case 0x1cdae10u: goto label_1cdae10;
        case 0x1cdae24u: goto label_1cdae24;
        case 0x1cdae34u: goto label_1cdae34;
        default: break;
    }

    ctx->pc = 0x1cdadb0u;

    // 0x1cdadb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cdadb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cdadb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdadb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdadb8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cdadb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1cdadbc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cdadbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cdadc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdadc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdadc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdadc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdadc8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1cdadc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdadcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdadccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cdadd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cdadd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cdadd4: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1cdadd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1cdadd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cdadd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cdaddc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cdaddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdade0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1cdade0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdade4: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDADE4u;
    SET_GPR_U32(ctx, 31, 0x1CDADECu);
    ctx->pc = 0x1CDADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDADE4u;
    // 0x1cdade8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDADE4u, 0x1CDADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDADECu;
label_1cdadec:
    // 0x1cdadec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdadecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdadf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cdadf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdadf4: 0xc736898  jal         func_1CDA260
    ctx->pc = 0x1CDADF4u;
    SET_GPR_U32(ctx, 31, 0x1CDADFCu);
    ctx->pc = 0x1CDADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDADF4u;
    // 0x1cdadf8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA260u, 0x1CDADF4u, 0x1CDADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDADFCu;
label_1cdadfc:
    // 0x1cdadfc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cdadfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cdae00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cdae00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdae04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdae08: 0xc73689a  jal         func_1CDA268
    ctx->pc = 0x1CDAE08u;
    SET_GPR_U32(ctx, 31, 0x1CDAE10u);
    ctx->pc = 0x1CDAE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAE08u;
    // 0x1cdae0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA268u, 0x1CDAE08u, 0x1CDAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAE10u;
label_1cdae10:
    // 0x1cdae10: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1cdae10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1cdae14: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1cdae14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1cdae18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cdae18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdae1c: 0xc73689c  jal         func_1CDA270
    ctx->pc = 0x1CDAE1Cu;
    SET_GPR_U32(ctx, 31, 0x1CDAE24u);
    ctx->pc = 0x1CDAE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAE1Cu;
    // 0x1cdae20: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA270u, 0x1CDAE1Cu, 0x1CDAE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAE24u;
label_1cdae24:
    // 0x1cdae24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cdae24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdae28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdae2c: 0xc736890  jal         func_1CDA240
    ctx->pc = 0x1CDAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1CDAE34u);
    ctx->pc = 0x1CDAE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAE2Cu;
    // 0x1cdae30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA240u, 0x1CDAE2Cu, 0x1CDAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAE34u;
label_1cdae34:
    // 0x1cdae34: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1cdae34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cdae38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdae38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdae3c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cdae3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdae40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdae40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdae44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdae44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdae48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdae48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdae4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cdae4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdae50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cdae50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdae54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cdae54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cdae58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cdae58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cdae5c: 0x873689e  j           func_1CDA278
    ctx->pc = 0x1CDAE5Cu;
    ctx->pc = 0x1CDAE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAE5Cu;
    // 0x1cdae60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA278u;
    sub_01CDA278_0x1cda278(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDAE64u;
    // 0x1cdae64: 0x0  nop
    ctx->pc = 0x1cdae64u;
    // NOP
    ctx->pc = 0x1cdae68u;
}
