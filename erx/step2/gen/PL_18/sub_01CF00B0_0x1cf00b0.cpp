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

// Function: sub_01CF00B0
// Address: 0x1cf00b0 - 0x1cf0168
void sub_01CF00B0_0x1cf00b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF00B0_0x1cf00b0");
#endif

    switch (ctx->pc) {
        case 0x1cf00ecu: goto label_1cf00ec;
        case 0x1cf00fcu: goto label_1cf00fc;
        case 0x1cf0110u: goto label_1cf0110;
        case 0x1cf0124u: goto label_1cf0124;
        case 0x1cf0134u: goto label_1cf0134;
        default: break;
    }

    ctx->pc = 0x1cf00b0u;

    // 0x1cf00b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cf00b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cf00b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf00b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf00b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cf00b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1cf00bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cf00bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cf00c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf00c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf00c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf00c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf00c8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1cf00c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf00cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cf00ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cf00d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cf00d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cf00d4: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1cf00d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1cf00d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cf00d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cf00dc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cf00dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cf00e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1cf00e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf00e4: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF00E4u;
    SET_GPR_U32(ctx, 31, 0x1CF00ECu);
    ctx->pc = 0x1CF00E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF00E4u;
    // 0x1cf00e8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF00E4u, 0x1CF00ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF00ECu;
label_1cf00ec:
    // 0x1cf00ec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf00ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf00f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cf00f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf00f4: 0xc73bd5a  jal         func_1CEF568
    ctx->pc = 0x1CF00F4u;
    SET_GPR_U32(ctx, 31, 0x1CF00FCu);
    ctx->pc = 0x1CF00F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF00F4u;
    // 0x1cf00f8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF568u, 0x1CF00F4u, 0x1CF00FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF00FCu;
label_1cf00fc:
    // 0x1cf00fc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cf00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cf0100: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cf0100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf0104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0108: 0xc73bd5c  jal         func_1CEF570
    ctx->pc = 0x1CF0108u;
    SET_GPR_U32(ctx, 31, 0x1CF0110u);
    ctx->pc = 0x1CF010Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0108u;
    // 0x1cf010c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF570u, 0x1CF0108u, 0x1CF0110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0110u;
label_1cf0110:
    // 0x1cf0110: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1cf0110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1cf0114: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1cf0114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1cf0118: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cf0118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf011c: 0xc73bd5e  jal         func_1CEF578
    ctx->pc = 0x1CF011Cu;
    SET_GPR_U32(ctx, 31, 0x1CF0124u);
    ctx->pc = 0x1CF0120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF011Cu;
    // 0x1cf0120: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF578u, 0x1CF011Cu, 0x1CF0124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0124u;
label_1cf0124:
    // 0x1cf0124: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf0124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf0128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf0128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf012c: 0xc73bd52  jal         func_1CEF548
    ctx->pc = 0x1CF012Cu;
    SET_GPR_U32(ctx, 31, 0x1CF0134u);
    ctx->pc = 0x1CF0130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF012Cu;
    // 0x1cf0130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF548u, 0x1CF012Cu, 0x1CF0134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0134u;
label_1cf0134:
    // 0x1cf0134: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1cf0134u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cf0138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf0138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf013c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cf013cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf0140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf0144: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf0144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf0148: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cf0148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf014c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cf014cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cf0150: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cf0150u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf0154: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cf0154u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cf0158: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cf0158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf015c: 0x873bd60  j           func_1CEF580
    ctx->pc = 0x1CF015Cu;
    ctx->pc = 0x1CF0160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF015Cu;
    // 0x1cf0160: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF580u;
    sub_01CEF580_0x1cef580(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF0164u;
    // 0x1cf0164: 0x0  nop
    ctx->pc = 0x1cf0164u;
    // NOP
    ctx->pc = 0x1cf0168u;
}
