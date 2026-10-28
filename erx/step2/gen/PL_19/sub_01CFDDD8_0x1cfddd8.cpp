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

// Function: sub_01CFDDD8
// Address: 0x1cfddd8 - 0x1cfde90
void sub_01CFDDD8_0x1cfddd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDDD8_0x1cfddd8");
#endif

    switch (ctx->pc) {
        case 0x1cfde14u: goto label_1cfde14;
        case 0x1cfde24u: goto label_1cfde24;
        case 0x1cfde38u: goto label_1cfde38;
        case 0x1cfde4cu: goto label_1cfde4c;
        case 0x1cfde5cu: goto label_1cfde5c;
        default: break;
    }

    ctx->pc = 0x1cfddd8u;

    // 0x1cfddd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cfddd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cfdddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfdddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfdde0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cfdde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1cfdde4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cfdde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cfdde8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfdde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfddec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cfddecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cfddf0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1cfddf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfddf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cfddf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cfddf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cfddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cfddfc: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1cfddfcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1cfde00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cfde00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cfde04: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cfde04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cfde08: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1cfde08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfde0c: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFDE0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFDE14u);
    ctx->pc = 0x1CFDE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDE0Cu;
    // 0x1cfde10: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFDE0Cu, 0x1CFDE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDE14u;
label_1cfde14:
    // 0x1cfde14: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cfde14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cfde18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cfde18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfde1c: 0xc73f49c  jal         func_1CFD270
    ctx->pc = 0x1CFDE1Cu;
    SET_GPR_U32(ctx, 31, 0x1CFDE24u);
    ctx->pc = 0x1CFDE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDE1Cu;
    // 0x1cfde20: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD270u, 0x1CFDE1Cu, 0x1CFDE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDE24u;
label_1cfde24:
    // 0x1cfde24: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cfde24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cfde28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cfde28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfde2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfde2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfde30: 0xc73f49e  jal         func_1CFD278
    ctx->pc = 0x1CFDE30u;
    SET_GPR_U32(ctx, 31, 0x1CFDE38u);
    ctx->pc = 0x1CFDE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDE30u;
    // 0x1cfde34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD278u, 0x1CFDE30u, 0x1CFDE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDE38u;
label_1cfde38:
    // 0x1cfde38: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1cfde38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1cfde3c: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1cfde3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1cfde40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cfde40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfde44: 0xc73f4a0  jal         func_1CFD280
    ctx->pc = 0x1CFDE44u;
    SET_GPR_U32(ctx, 31, 0x1CFDE4Cu);
    ctx->pc = 0x1CFDE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDE44u;
    // 0x1cfde48: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD280u, 0x1CFDE44u, 0x1CFDE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDE4Cu;
label_1cfde4c:
    // 0x1cfde4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cfde4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cfde50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfde50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfde54: 0xc73f494  jal         func_1CFD250
    ctx->pc = 0x1CFDE54u;
    SET_GPR_U32(ctx, 31, 0x1CFDE5Cu);
    ctx->pc = 0x1CFDE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDE54u;
    // 0x1cfde58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD250u, 0x1CFDE54u, 0x1CFDE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDE5Cu;
label_1cfde5c:
    // 0x1cfde5c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1cfde5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cfde60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfde60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfde64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cfde64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfde68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfde68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfde6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cfde6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfde70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cfde70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfde74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cfde74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cfde78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cfde78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfde7c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cfde7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cfde80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cfde80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cfde84: 0x873f4a2  j           func_1CFD288
    ctx->pc = 0x1CFDE84u;
    ctx->pc = 0x1CFDE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDE84u;
    // 0x1cfde88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD288u;
    sub_01CFD288_0x1cfd288(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFDE8Cu;
    // 0x1cfde8c: 0x0  nop
    ctx->pc = 0x1cfde8cu;
    // NOP
    ctx->pc = 0x1cfde90u;
}
