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

// Function: sub_01C99D88
// Address: 0x1c99d88 - 0x1c99eb0
void sub_01C99D88_0x1c99d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99D88_0x1c99d88");
#endif

    switch (ctx->pc) {
        case 0x1c99dc0u: goto label_1c99dc0;
        case 0x1c99df0u: goto label_1c99df0;
        case 0x1c99e00u: goto label_1c99e00;
        case 0x1c99e10u: goto label_1c99e10;
        case 0x1c99e54u: goto label_1c99e54;
        case 0x1c99e70u: goto label_1c99e70;
        case 0x1c99e80u: goto label_1c99e80;
        default: break;
    }

    ctx->pc = 0x1c99d88u;

    // 0x1c99d88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c99d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c99d8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c99d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c99d90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c99d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c99d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c99d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c99d98: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c99d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99d9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c99d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c99da0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c99da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c99da4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c99da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c99da8: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1c99da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1c99dac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c99dacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99db0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c99db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c99db4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c99db4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99db8: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C99DB8u;
    SET_GPR_U32(ctx, 31, 0x1C99DC0u);
    ctx->pc = 0x1C99DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99DB8u;
    // 0x1c99dbc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C99DB8u, 0x1C99DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99DC0u;
label_1c99dc0:
    // 0x1c99dc0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c99dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c99dc4: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c99dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c99dc8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c99dc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c99dcc: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1c99dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1c99dd0: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1c99dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1c99dd4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c99dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c99dd8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1c99dd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c99ddc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c99ddcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c99de0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c99de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c99de4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c99de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c99de8: 0xc7262c6  jal         func_1C98B18
    ctx->pc = 0x1C99DE8u;
    SET_GPR_U32(ctx, 31, 0x1C99DF0u);
    ctx->pc = 0x1C99DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99DE8u;
    // 0x1c99dec: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B18u, 0x1C99DE8u, 0x1C99DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99DF0u;
label_1c99df0:
    // 0x1c99df0: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c99df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c99df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c99df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99df8: 0xc7262c6  jal         func_1C98B18
    ctx->pc = 0x1C99DF8u;
    SET_GPR_U32(ctx, 31, 0x1C99E00u);
    ctx->pc = 0x1C99DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99DF8u;
    // 0x1c99dfc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B18u, 0x1C99DF8u, 0x1C99E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99E00u;
label_1c99e00:
    // 0x1c99e00: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1c99e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1c99e04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c99e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99e08: 0xc7262c8  jal         func_1C98B20
    ctx->pc = 0x1C99E08u;
    SET_GPR_U32(ctx, 31, 0x1C99E10u);
    ctx->pc = 0x1C99E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99E08u;
    // 0x1c99e0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B20u, 0x1C99E08u, 0x1C99E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99E10u;
label_1c99e10:
    // 0x1c99e10: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1c99e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99e14: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c99e14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c99e18: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1c99e18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c99e1c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1c99e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1c99e20: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c99e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c99e24: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1c99e24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c99e28: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1c99e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99e2c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1c99e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1c99e30: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1c99e30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1c99e34: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c99e34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c99e38: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1c99e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c99e3c: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1c99e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1c99e40: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1c99e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1c99e44: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1c99e44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1c99e48: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1c99e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99e4c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1c99e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1c99e50: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1c99e50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1c99e54:
    // 0x1c99e54: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1c99e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c99e58: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c99e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c99e5c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1c99e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1c99e60: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c99e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c99e64: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1c99e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1c99e68: 0xc7262c6  jal         func_1C98B18
    ctx->pc = 0x1C99E68u;
    SET_GPR_U32(ctx, 31, 0x1C99E70u);
    ctx->pc = 0x1C99E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99E68u;
    // 0x1c99e6c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B18u, 0x1C99E68u, 0x1C99E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99E70u;
label_1c99e70:
    // 0x1c99e70: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1c99e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1c99e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c99e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99e78: 0xc7262c6  jal         func_1C98B18
    ctx->pc = 0x1C99E78u;
    SET_GPR_U32(ctx, 31, 0x1C99E80u);
    ctx->pc = 0x1C99E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99E78u;
    // 0x1c99e7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B18u, 0x1C99E78u, 0x1C99E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99E80u;
label_1c99e80:
    // 0x1c99e80: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1c99e80u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c99e84: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C99E84u;
    {
        const bool branch_taken_0x1c99e84 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C99E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99E84u;
        // 0x1c99e88: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99e84) {
            ctx->pc = 0x1C99E54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c99e54;
        }
    }
    ctx->pc = 0x1C99E8Cu;
    // 0x1c99e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c99e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c99e90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c99e90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c99e94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c99e94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c99e98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c99e98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c99e9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c99e9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c99ea0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c99ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c99ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C99EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C99EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99EA4u;
        // 0x1c99ea8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C99EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C99EACu;
    // 0x1c99eac: 0x0  nop
    ctx->pc = 0x1c99eacu;
    // NOP
    ctx->pc = 0x1c99eb0u;
}
