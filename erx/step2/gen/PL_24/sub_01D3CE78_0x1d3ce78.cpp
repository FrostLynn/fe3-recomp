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

// Function: sub_01D3CE78
// Address: 0x1d3ce78 - 0x1d3cfa0
void sub_01D3CE78_0x1d3ce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3CE78_0x1d3ce78");
#endif

    switch (ctx->pc) {
        case 0x1d3ceb0u: goto label_1d3ceb0;
        case 0x1d3cee0u: goto label_1d3cee0;
        case 0x1d3cef0u: goto label_1d3cef0;
        case 0x1d3cf00u: goto label_1d3cf00;
        case 0x1d3cf44u: goto label_1d3cf44;
        case 0x1d3cf60u: goto label_1d3cf60;
        case 0x1d3cf70u: goto label_1d3cf70;
        default: break;
    }

    ctx->pc = 0x1d3ce78u;

    // 0x1d3ce78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3ce78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3ce7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3ce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3ce80: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d3ce80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d3ce84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3ce88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d3ce88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ce8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3ce8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3ce90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d3ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d3ce94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d3ce94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d3ce98: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1d3ce98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1d3ce9c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d3ce9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cea0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3cea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3cea4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d3cea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cea8: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3CEA8u;
    SET_GPR_U32(ctx, 31, 0x1D3CEB0u);
    ctx->pc = 0x1D3CEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CEA8u;
    // 0x1d3ceac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3CEA8u, 0x1D3CEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CEB0u;
label_1d3ceb0:
    // 0x1d3ceb0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d3ceb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d3ceb4: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1d3ceb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d3ceb8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d3ceb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d3cebc: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1d3cebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1d3cec0: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1d3cec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1d3cec4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d3cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d3cec8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1d3cec8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d3cecc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d3ceccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d3ced0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d3ced0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d3ced4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d3ced4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d3ced8: 0xc74ef06  jal         func_1D3BC18
    ctx->pc = 0x1D3CED8u;
    SET_GPR_U32(ctx, 31, 0x1D3CEE0u);
    ctx->pc = 0x1D3CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CED8u;
    // 0x1d3cedc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC18u, 0x1D3CED8u, 0x1D3CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CEE0u;
label_1d3cee0:
    // 0x1d3cee0: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1d3cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d3cee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3cee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cee8: 0xc74ef06  jal         func_1D3BC18
    ctx->pc = 0x1D3CEE8u;
    SET_GPR_U32(ctx, 31, 0x1D3CEF0u);
    ctx->pc = 0x1D3CEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CEE8u;
    // 0x1d3ceec: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC18u, 0x1D3CEE8u, 0x1D3CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CEF0u;
label_1d3cef0:
    // 0x1d3cef0: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1d3cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1d3cef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3cef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cef8: 0xc74ef08  jal         func_1D3BC20
    ctx->pc = 0x1D3CEF8u;
    SET_GPR_U32(ctx, 31, 0x1D3CF00u);
    ctx->pc = 0x1D3CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CEF8u;
    // 0x1d3cefc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC20u, 0x1D3CEF8u, 0x1D3CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CF00u;
label_1d3cf00:
    // 0x1d3cf00: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1d3cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3cf04: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d3cf04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d3cf08: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1d3cf08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d3cf0c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1d3cf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1d3cf10: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d3cf10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d3cf14: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1d3cf14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d3cf18: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1d3cf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3cf1c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1d3cf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1d3cf20: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1d3cf20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1d3cf24: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d3cf24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d3cf28: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1d3cf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3cf2c: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1d3cf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1d3cf30: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1d3cf30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1d3cf34: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1d3cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1d3cf38: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1d3cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3cf3c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1d3cf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1d3cf40: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1d3cf40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1d3cf44:
    // 0x1d3cf44: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1d3cf44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d3cf48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d3cf48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d3cf4c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1d3cf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d3cf50: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d3cf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d3cf54: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1d3cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1d3cf58: 0xc74ef06  jal         func_1D3BC18
    ctx->pc = 0x1D3CF58u;
    SET_GPR_U32(ctx, 31, 0x1D3CF60u);
    ctx->pc = 0x1D3CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CF58u;
    // 0x1d3cf5c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC18u, 0x1D3CF58u, 0x1D3CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CF60u;
label_1d3cf60:
    // 0x1d3cf60: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1d3cf60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1d3cf64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3cf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cf68: 0xc74ef06  jal         func_1D3BC18
    ctx->pc = 0x1D3CF68u;
    SET_GPR_U32(ctx, 31, 0x1D3CF70u);
    ctx->pc = 0x1D3CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CF68u;
    // 0x1d3cf6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC18u, 0x1D3CF68u, 0x1D3CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CF70u;
label_1d3cf70:
    // 0x1d3cf70: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1d3cf70u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d3cf74: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D3CF74u;
    {
        const bool branch_taken_0x1d3cf74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CF74u;
        // 0x1d3cf78: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cf74) {
            ctx->pc = 0x1D3CF44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3cf44;
        }
    }
    ctx->pc = 0x1D3CF7Cu;
    // 0x1d3cf7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3cf7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3cf80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3cf80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3cf84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3cf84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3cf88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d3cf88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3cf8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d3cf8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3cf90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d3cf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d3cf94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3CF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CF94u;
        // 0x1d3cf98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3CF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3CF9Cu;
    // 0x1d3cf9c: 0x0  nop
    ctx->pc = 0x1d3cf9cu;
    // NOP
    ctx->pc = 0x1d3cfa0u;
}
