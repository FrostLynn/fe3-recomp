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

// Function: sub_01DC4CD0
// Address: 0x1dc4cd0 - 0x1dc4d88
void sub_01DC4CD0_0x1dc4cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4CD0_0x1dc4cd0");
#endif

    switch (ctx->pc) {
        case 0x1dc4cf8u: goto label_1dc4cf8;
        case 0x1dc4d24u: goto label_1dc4d24;
        case 0x1dc4d30u: goto label_1dc4d30;
        case 0x1dc4d40u: goto label_1dc4d40;
        case 0x1dc4d50u: goto label_1dc4d50;
        case 0x1dc4d5cu: goto label_1dc4d5c;
        default: break;
    }

    ctx->pc = 0x1dc4cd0u;

    // 0x1dc4cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dc4cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dc4cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc4cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc4cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc4cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dc4cdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dc4cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dc4ce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc4ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4ce4: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1dc4ce4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1dc4ce8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dc4ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dc4cec: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1dc4cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dc4cf0: 0xc77108e  jal         func_1DC4238
    ctx->pc = 0x1DC4CF0u;
    SET_GPR_U32(ctx, 31, 0x1DC4CF8u);
    ctx->pc = 0x1DC4CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4CF0u;
    // 0x1dc4cf4: 0x4480a000  mtc1        $zero, $f20 (Delay Slot)
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4238u, 0x1DC4CF0u, 0x1DC4CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4CF8u;
label_1dc4cf8:
    // 0x1dc4cf8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1dc4cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1dc4cfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dc4cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc4d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4d04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc4d04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d08: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1dc4d08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc4d0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dc4d0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dc4d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dc4d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dc4d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d1c: 0xc771098  jal         func_1DC4260
    ctx->pc = 0x1DC4D1Cu;
    SET_GPR_U32(ctx, 31, 0x1DC4D24u);
    ctx->pc = 0x1DC4D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4D1Cu;
    // 0x1dc4d20: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4260u, 0x1DC4D1Cu, 0x1DC4D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4D24u;
label_1dc4d24:
    // 0x1dc4d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d28: 0xc771090  jal         func_1DC4240
    ctx->pc = 0x1DC4D28u;
    SET_GPR_U32(ctx, 31, 0x1DC4D30u);
    ctx->pc = 0x1DC4D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4D28u;
    // 0x1dc4d2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4240u, 0x1DC4D28u, 0x1DC4D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4D30u;
label_1dc4d30:
    // 0x1dc4d30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1dc4d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc4d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc4d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d38: 0xc771092  jal         func_1DC4248
    ctx->pc = 0x1DC4D38u;
    SET_GPR_U32(ctx, 31, 0x1DC4D40u);
    ctx->pc = 0x1DC4D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4D38u;
    // 0x1dc4d3c: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4248u, 0x1DC4D38u, 0x1DC4D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4D40u;
label_1dc4d40:
    // 0x1dc4d40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc4d40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc4d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d48: 0xc771086  jal         func_1DC4218
    ctx->pc = 0x1DC4D48u;
    SET_GPR_U32(ctx, 31, 0x1DC4D50u);
    ctx->pc = 0x1DC4D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4D48u;
    // 0x1dc4d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4218u, 0x1DC4D48u, 0x1DC4D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4D50u;
label_1dc4d50:
    // 0x1dc4d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d54: 0xc771094  jal         func_1DC4250
    ctx->pc = 0x1DC4D54u;
    SET_GPR_U32(ctx, 31, 0x1DC4D5Cu);
    ctx->pc = 0x1DC4D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4D54u;
    // 0x1dc4d58: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4250u, 0x1DC4D54u, 0x1DC4D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4D5Cu;
label_1dc4d5c:
    // 0x1dc4d5c: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x1dc4d5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1dc4d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d64: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1dc4d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1dc4d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dc4d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dc4d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc4d70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc4d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc4d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc4d78: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1dc4d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dc4d7c: 0x877109a  j           func_1DC4268
    ctx->pc = 0x1DC4D7Cu;
    ctx->pc = 0x1DC4D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4D7Cu;
    // 0x1dc4d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4268u;
    sub_01DC4268_0x1dc4268(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC4D84u;
    // 0x1dc4d84: 0x0  nop
    ctx->pc = 0x1dc4d84u;
    // NOP
    ctx->pc = 0x1dc4d88u;
}
